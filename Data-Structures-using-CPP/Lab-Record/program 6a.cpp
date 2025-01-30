		#include<iostream>
using namespace std;
class node
{
	public:
		int rollno;
		node *next;
		node* head=NULL,*tail=NULL;
	public:
		 void create()
		{
			//node *ptr;
			node* ptr=new node();
			ptr->rollno=12;
			ptr->next=NULL;
			cout<<"the first value"<<ptr->rollno;
			head=ptr;
			tail=ptr;
		}
		void insertatbeg()
		{
			node* p=new node();
			p->rollno=23;
			p->next=head;
	        head=p;
			cout<<"\nvalue at beg"<<head->rollno<<"\n";
		}
		void insertatend()
		{
			node *e=new node();
			e->rollno=78;
			e->next=NULL;
			tail->next=e;
			tail=e;
			cout<<"\nvalue at end"<<tail->rollno<<"\n";
		}
		void insertinbet()
		{
			node* temp=head;
			int i;
			cout<<"\nenter the location where u want to insert";
			cin>>i;
			for(int j=0;j<i;j++)
			{
				temp=temp->next;
			}
			node* p=new node();
			p->rollno=67;
			p->next=temp->next;
			temp->next=p;
			cout<<"\nvalue insert"<<temp->rollno;
			
		}
		void show()
		{
			 node* temp=head;
			while(temp->next!=NULL)
			
			{
				cout<<"\n\nrollno is"<<temp->rollno;
				temp=temp->next;
			}
			cout<<"\n\nrollno at tail"<<temp->rollno<<"\n";
		}
};
int main()
{
	node n;
	n.create();
	n.insertatbeg();
	n.insertatend();
	n.insertinbet();
	n.show();
	return 0;
}

