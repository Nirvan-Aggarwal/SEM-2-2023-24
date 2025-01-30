#include<iostream>
using namespace std;
class queue
{
	public:
		int rollno;
		queue *next;
		queue *front=NULL,*rear=NULL;
		public:
			void create()
			{
				queue *p=new queue();
				cout<<"enter rollno";
				cin>>p->rollno;
				p->next=NULL;
				front=p;
				rear=p;
			}
			void enqueue()
			{
				queue *p=new queue();
				cout<<"enter rollno";
				cin>>p->rollno;
				p->next=NULL;
				rear->next=p;
				rear=p;
				cout<<"value at rear is "<<rear->rollno;
			}
			void show()
			{
				queue *temp;
				temp=front;
				while(temp->next!=NULL)
				{
				
				cout<<"value"<<temp->rollno;
				temp=temp->next;
			    }
			    cout<<"value"<<temp->rollno;
			}
			void dequeue()
			{ 
				queue *temp;
				temp=front;
				cout<<"item deleted is "<<temp->rollno;
				delete(temp);
			}
};
int main()
{
	queue s;
	s.create();
	for(int i=0;i<5;i++)
	{
		s.enqueue();
	}
	
	
	
	s.show();

	s.dequeue();
	return 0;
}

