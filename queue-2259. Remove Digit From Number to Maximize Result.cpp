class Solution {
public:
    string removeDigit(string number, char digit) {
        
        
             int n=number.size();
             queue<int>q;
             for(int i=0;i<n;i++){
                 
                 if(number[i]==digit) q.push(i);
             }
            long long  ans=0;
            string res="";
            while(!q.empty()){
                      int size=q.size();
                     int idx=q.front();
                     q.pop();
                    int idx1=idx+1;
                  if(size==1){
                          string curr=number.substr(0,idx)+number.substr(idx+1);
                          return curr;
                  }
                  if(idx1<=(n-1)){
                      
                      int x=number[idx];
                      int y=number[idx+1];
                      if(y>x){
                          string curr=number.substr(0,idx)+number.substr(idx+1);
                          return curr;
                      }
                      else if(x==y and q.size()==0){
                            string curr=number.substr(0,idx)+number.substr(idx+1);
                          return curr;
                      }
                  }else{
                         string curr=number.substr(0,idx)+number.substr(idx+1);
                          return curr;
                  }    
            }
        return res;
    }
};
