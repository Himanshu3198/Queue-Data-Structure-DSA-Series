// Reverse First K elements of Queue 
queue<int> modifyQueue(queue<int> q, int k)
{
    //add code here.
    
    int k1=0;
    stack<int>st;
    while(k1!=k){
       
       int x=q.front();
        q.pop();
        st.push(x);
        
          k1++;
        }
       
    
       
     
        
    
    queue<int>q1;
 
    while(!st.empty()){
        int x=st.top();
        st.pop();
        q1.push(x);
    }
        while(!q.empty()){
        int x=q.front();
        q.pop();
        q1.push(x);
    }
   
    return q1;
}
