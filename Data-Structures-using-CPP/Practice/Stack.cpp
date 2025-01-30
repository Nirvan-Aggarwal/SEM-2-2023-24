#include<iostream>
using namespace std;

class stack
{
	public:
 		static int top;
 		int max,item,a[100];
    public:
    	//constructor
    	stack()
    	{
    		cout<<"Enter Max Element: ";
    		cin>>max;
		}
		//function push
    	void push()
    	{
    		cout<<"Enter item: ";
    		cin>> item;
    		if(stack::top >= max-1)
    		{
    			cout<<"Stack is overflow"<<endl;
			}
			else
			{
				stack::top++;
				a[stack::top] = item;
				cout<<"Item at the top is "<<a[stack::top]<<endl;
			}
		}
		//function pop
    	void pop()
    	{
    		if(stack::top < 0)
    		{
    			cout<<"Stack is underflow"<<endl;
			}
			else
			{
				item=a[stack::top];
				stack::top--;
				cout<<"Element removed is "<<item<<endl;
			}
		}
};

int stack::top = -1;

int main()
{
	stack s;
	int choice;
	do
	{
		cout << "\n1. Push\n2. Pop\n3. Exit\nEnter your choice: ";
		cin >> choice;

		switch(choice)
		{
			case 1:
				s.push();
				break;
			case 2:
				s.pop();
				break;
			case 3:
				cout << "Exiting..." << endl;
				break;
			default:
				cout << "Invalid choice! Please enter again." << endl;
		}
	} while(choice != 3);

	return 0;
}

