#include <iostream>
#include <queue>
 
using namespace std;

void display(queue<int>myqueue){

      // iterative
    // if(!myqueue.empty()){
    //        cout<<myqueue.front()<<" ";
    //     myqueue.pop();
    // }
    // else{
    //     display(myqueue);
    // }
             // recursion
          if(myqueue.empty()){
              return;
          }
       cout<<myqueue.front()<<" ";
        myqueue.pop();
        display(myqueue);

     
    
    cout<<"\n";
}
 
 int main(){

     queue<int> myqueue;
     myqueue.push(10);
     myqueue.push(20);
     myqueue.push(30);
     myqueue.push(40);
     myqueue.push(50);
     myqueue.pop();
         myqueue.pop();
             myqueue.pop();
              myqueue.pop();
    //  cout<<myqueue.size()<<"\n";
    //   cout<<myqueue.front()<<"\n";
    //    cout<<myqueue.back()<<"\n";


     display(myqueue);
 }