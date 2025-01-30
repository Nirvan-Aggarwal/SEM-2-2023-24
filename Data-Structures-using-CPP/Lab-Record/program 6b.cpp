#include<iostream>
using namespace std;
class node
{
	public:
		int rollno;
		node *prev,*next;
		node *head=NULL,*tail=NULL;
	public:
		void create()
		{
			node *ptr=new node();
			cout<<"\nenter the rollno";
			cin>>ptr->rollno;
			ptr->prev=NULL;
			ptr->next=NULL;
			head=ptr;
			tail=ptr;
			cout<<"\nvalue at head"<<head->rollno;
			
		}
		void insertatbeg()
		{
			node *p=new node();
		cout<<"\n\nenter the rollno";
			cin>>p->rollno;
			p->prev=NULL;
			p->next=head;
			head->prev=p;
			head=p;
			cout<<"\nvalue at head"<<head->rollno;
		}
		void show()
		{
			node *temp;
			temp=head;
			while(temp->next!=NULL)
			{
				cout<<"\n\nvalue of rollno"<<temp->rollno;
				temp=temp->next;
			}
			cout<<"\nvalue of rollno"<<temp->rollno;
			}
				
};
int main()
{
	node n;
	n.create();
	n.insertatbeg();
	n.show();
	return 0;
}

