#include<iostream>
using namespace std;
class queue
{
	public: 
	int a[3],max=3,item;
	int rear,front;
	public:
		queue()
	{
		cout<<"max element :"<<max;
		rear=-1;
		front=-1; 
	}
		void enqueue()
		{	
			if(a[rear]==max)
			{
				cout<<"\nqueue overflow";
			}
			else
			{
				if(front==-1)
				{
					front=front+1;	
				}
				cout<<"\nenter the item ";
		    	cin>>item;
				rear=rear+1;
				a[rear]=item;
				cout<<"the value is "<<a[rear];
			}
		}
		void dequeue()
		{
			if(a[front]==a[rear+1])
			{
				cout<<"\nqueue underflow";	
			}
			else
			{
				item=a[front];
				cout<<"\nelement removed is "<<item;
				front=front+1;
			}
		}
};
int main()
{ queue q;
q.enqueue();
q.enqueue();
q.enqueue();
q.enqueue();
q.dequeue();
q.dequeue();
q.dequeue();
q.dequeue();
return 0;
}

