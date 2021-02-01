#include<iostream>
#define max 10
using namespace std;

int queue[max];
int rear=-1,front=-1;
void insert(int x)
{
	if(rear==max-1)
	{
		cout<<"queue overflow \n";
	}
	else
	{
		if(front==-1)
		{
			front=0;
			cout<<"insert the element in queue\n";
		}
		rear++;
		queue[rear]=x;
	}
}
   void delete_queue()
   {
   
	if(front==-1 || front>rear)
	{
		cout<<"queue underflow\n";
		
	}
	else{
		cout<<"element deleted from queue is  "<<queue[front]<<endl;
		front++;
	}
	
    }
   void display()
{
	if(front==-1)
	cout<<"queue is empty"<<endl;
	else
	{
	cout<<"element in queue is \n";
	
	for(int i=front ;i<=rear;i++)
	{
		cout<<queue[i]<<" ";
	}
	}
}
int main()
{
//	cout<<"given queue is"<<endl;
	insert(10);
	insert(20);
	insert(30);
	insert(40);
	insert(50);
	// insert(60);
// 	delete()
//  delete_queue();
//  delete_queue();
	display();
	 delete_queue();
		insert(260);
//			insert(60);
//				insert(60);
	display();

	
}
