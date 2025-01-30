#include<iostream>
using namespace std;
class stack
{ public: 
    int a[10],max,item;
    int top;
    public:
    	stack()
    	{ top=-1;
		  max=10;
		  cout<<"Max element "<<max;
		}
    	void push()
    	{
    			if(stack::top == max-1)
    		{ cout<<"\nStack is overflow";
    		 
			}
    	else
		{
			cout<<"\n\nEnter item at top "<<stack::top+1<<" ";
    		cin>>item;
			stack::top=stack::top+1;
			a[stack::top]=item;
			cout<<"Item at the top is: "<<a[stack::top];
			
		}
		}
     void pop()
     { 
       if(stack::top < 0)
       {
	   cout<<"\nStack is underflow";

	   }
	 else
	  {
	     item=a[stack::top];
	  stack::top=stack::top-1;
	  cout<<"\n\nElement removed is "<<item;
	   }
     }
};

int main()
{ stack s;
int i;
for(i=0;i<11;i++)
 s.push();
 for(i=0;i<11;i++)
 s.pop();
 
 
  return 0;
}

