#include<bits/stdc++.h>
using namespace std;

void interLeaveQueue(queue<int>&q){

   stack<int>s;

   int half=q.size()/2;
//    step 1 push first half in stack
   for(int i=0;i<half;i++){

       s.push(q.front());
       q.pop();
   }
   //step 2 push back stack element in queue
   while(!s.empty()){

       q.push(s.top());
       s.pop();
   }
  //step 3 rearrange queue by swaping first to second half
   for(int i=0;i<half;i++){
       q.push(q.front());
       q.pop();
   }

   // step 4 push again first half in stack

   for(int i=0;i<half;i++){
       s.push(q.front());
       q.pop();
   }

   // step 5  finally push top ele from stack to back of queue and then enqueu and dequeue last ele from queue

   for(int i=0;i<half;i++){
       q.push(s.top());
       s.pop();
       q.push(q.front());
       q.pop();
   }


}

int main(){


    queue<int>q;
    q.push(11);
    q.push(12);
    q.push(13);
    q.push(14);
    q.push(15);
    q.push(16);
    q.push(17);
    q.push(18);
    q.push(19);
    q.push(20);
    interLeaveQueue(q);
    int len=q.size();

    for(int i=0;i<len;i++){
        cout<<q.front()<<" ";
        q.pop();
    }




}