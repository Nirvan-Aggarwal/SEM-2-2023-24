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
			ptr->rollno=12;//or cin>>ptr->rollno;
			ptr->next=NULL;
			cout<<"the first value"<<ptr->rollno<<endl;
			head=ptr;
			tail=ptr;
		}
		void insertatbeg()
		{
			node* p=new node();
			p->rollno=23;
			p->next=head;
	        head=p;
			cout<<"value at beg"<<head->rollno<<endl;
		}
		void show()
		{
			 node* temp=head;
			while(temp->next!=NULL)
			
			{
				cout<<"rollno is"<<temp->rollno<<endl;
				temp=temp->next;
			}
			cout<<"rollno at tail"<<temp->rollno<<endl;
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

