// 542. 01 Matrix

class Solution {
public:
    
        int x[4]={-1,0,1,0};
         int y[4]={0,1,0,-1};
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
          int n=mat.size();
          int m=mat[0].size();
        
        
        vector<vector<int>>dis(n,vector<int>(m,-1));
        queue<pair<int,int>>q;
        
        for(int i=0;i<n;i++){
            
            for(int j=0;j<m;j++){
                
                if(mat[i][j]==0){
                    
                    q.push({i,j});
                    dis[i][j]=0;
                }
            }
        }
        
        
        while(!q.empty()){
            
            
            pair<int,int>p;
            p=q.front();
            q.pop();
            
            for(int i=0;i<4;i++){
              int  xd=p.first+x[i];
               int yd=p.second+y[i];
                
                
                if(xd>=0 and xd<=n-1 and yd>=0 and yd<=m-1 and mat[xd][yd]==1 and dis[xd][yd]==-1){
                    
                    dis[xd][yd]=dis[p.first][p.second]+1;
                    q.push({xd,yd});
                }
            }
        }
        return dis;
    }
};
