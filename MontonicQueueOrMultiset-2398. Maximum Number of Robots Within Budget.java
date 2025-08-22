class Solution {
    public int maximumRobots(int[] chargeTimes, int[] runningCosts, long budget) {
        int left = 0, n = chargeTimes.length, ans = 0, k = 0;
        long cost = 0;
        TreeMap<Integer, Integer> ms = new TreeMap<>();

        for (int right = 0; right < n; right++) {
            k++;
            // add chargeTime
            ms.put(chargeTimes[right], ms.getOrDefault(chargeTimes[right], 0) + 1);
            cost += runningCosts[right];
            long curr = (long) ms.lastKey() + k * cost;

            while (!ms.isEmpty() && curr > budget) {
                k--;
                cost -= runningCosts[left];
                // remove chargeTime[left] safely
                int freq = ms.get(chargeTimes[left]);
                if (freq == 1)
                    ms.remove(chargeTimes[left]);
                else
                    ms.put(chargeTimes[left], freq - 1);

                left++;
                if (!ms.isEmpty())
                    curr = (long) ms.lastKey() + k * cost;
            }
            
            ans = Math.max(ans, k);
        }
        return ans;
    }
}
