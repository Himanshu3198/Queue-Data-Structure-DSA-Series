// Queue Reversal 
queue<int> rev(queue<int> q)
{
    // add code here.
    stack<int>st;
    
    while(!q.empty()){
        int x=q.front();
        q.pop();
        st.push(x);
    }
    
    while(!st.empty()){
        
        int x=st.top();
        st.pop();
        q.push(x);
        
        
        
    }
    return q;
}
