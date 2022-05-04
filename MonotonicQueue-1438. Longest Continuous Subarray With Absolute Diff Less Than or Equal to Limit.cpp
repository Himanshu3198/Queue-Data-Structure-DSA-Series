class Solution {
public:
    /*the idea is to use two monotonic queues first queue for storing increasing order of element
      that gives smallest element while other queue for storing decreasing order of element
      that gives largest one.
      
      time complexity O(n)
      space complexity O(2n)
      */
    int longestSubarray(vector<int>& nums, int limit) {
        int n=nums.size();
        deque<int>smallestTop,largestTop;
        int i=0,j=0,ans=0;
        while(j<n){
            while(!smallestTop.empty() && nums[smallestTop.back()]>nums[j]) smallestTop.pop_back();
            while(!largestTop.empty() && nums[largestTop.back()]<nums[j]) largestTop.pop_back();
            smallestTop.push_back(j);
            largestTop.push_back(j);
            if(abs(nums[smallestTop.front()]-nums[largestTop.front()])<=limit)
            ans=max(ans,j-i+1);
            else{
                i++;
                while(i>smallestTop.front())
                    smallestTop.pop_front();
                while(i>largestTop.front())
                    largestTop.pop_front();
            }
            j++;
        } 
        return ans;
        
    }
};
