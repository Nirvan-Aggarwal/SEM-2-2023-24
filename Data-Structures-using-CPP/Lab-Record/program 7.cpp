#include<iostream>
using namespace std;
class stack
{
	public:
		int rollno;
		stack *next;
		stack *top=NULL;
		public:
			void create()
			{
				stack *p=new stack();
				cout<<"enter rollno";
				cin>>p->rollno;
				p->next=NULL;
				top=p;
			}
			void push()
			{
				stack *p=new stack();
				cout<<"enter rollno";
				cin>>p->rollno;
				p->next=top;
				top=p;
				cout<<"value at top is "<<top->rollno;
			}
			void show()
			{
				stack *temp;
				temp=top;
				while(temp->next!=NULL)
				{
				
				cout<<"value"<<temp->rollno;
				temp=temp->next;
			    }
			    cout<<"last value"<<temp->rollno;
			}
			void pop()
			{ 
				stack *temp;
				temp=top;
				cout<<"item deleted is "<<temp->rollno;
				delete(temp);
			}
};
int main()
{
	stack s;
	s.create();
	for(int i=0;i<5;i++)
	{
		s.push();
	}
	s.show();
	s.pop();
	return 0;
}

