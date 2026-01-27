class Solution:
    def canReach(self, s: str, minJump: int, maxJump: int) -> bool:

        n = len(s)
        if s[n-1]  == '1' or s[0] == '1':
            return False

        q = []
        q.append(0)
        so_far = 0
        
        while q:

                curr = q.pop(0)
                if curr >= n-1:
                    return True
                start = max(curr+minJump,so_far+1)
                end = min(curr+maxJump,n-1)
                for j in range(start,end+1):
                    if j <= n-1 and s[j] == '0':
                       q.append(j)       
                so_far = end
            
        return False


            
        
