class Solution {
    public int[] maxSlidingWindow(int[] nums, int k) {
        
        int n = nums.length;
        Deque<Integer>dq = new ArrayDeque<>();
        List<Integer> res = new ArrayList<>();

        int left = 0;
        for(int right = 0;right<n;right++){

            while(!dq.isEmpty() && dq.peekLast() < nums[right]){
                dq.pollLast();
            }
            dq.addLast(nums[right]);

            int window = right-left+1;
            if(window == k){
                
                res.add(dq.peekFirst());
                if(!dq.isEmpty() && dq.peekFirst() == nums[left++]){
                    dq.pollFirst();
                }
            }
            
        }
        
        int[] result = new int[res.size()];
        for(int i=0;i<res.size();i++){
            result[i] = res.get(i);
        }
        return result;
    }
}
