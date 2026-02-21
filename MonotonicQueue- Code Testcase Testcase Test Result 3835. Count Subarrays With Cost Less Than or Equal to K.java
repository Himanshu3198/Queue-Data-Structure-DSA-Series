class Solution {
    public long countSubarrays(int[] nums, long k) {
           
           int n = nums.length;
           long ans = 0;
           Deque<Integer> minDq = new ArrayDeque<>();
           Deque<Integer> maxDq = new ArrayDeque<>();
           int left = 0;

           for(int right=0;right<n;right++){
                while(!maxDq.isEmpty() && nums[right]> nums[maxDq.peekLast()]){
                    maxDq.pollLast();
                }
                maxDq.offerLast(right);
                while(!minDq.isEmpty() && nums[right]<nums[minDq.peekLast()]){
                    minDq.pollLast();
                }
                minDq.offerLast(right);
                while(!minDq.isEmpty() && !maxDq.isEmpty() &&(long)((nums[maxDq.peekFirst()]-nums[minDq.peekFirst()])*(right-left+1L))>k){

                        if(minDq.peekFirst() == left){
                            minDq.pollFirst();
                        }
                        if(maxDq.peekFirst() == left){
                            maxDq.pollFirst();
                        }
                        left++;
                }
                ans += (right-left+1);
           }
           return ans;
    }
}
