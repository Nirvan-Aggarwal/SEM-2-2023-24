#include<iostream>
using namespace std;
class cq
{
	public:
		int item,a[5],max,r,f;
		
		public:
			cq()
			{
				max=5;
				cout<<"max"<<max<<endl;
				r=-1;
				f=-1;
			
			}
		void enqueue()
		{
			cout<<"enter the item"<<endl;
			cin>>item;
			
			if(f==r+1%max)
			{
				cout<<"overflow"<<endl;
			}
			else if(r==-1 && f==-1)
			{  
                f=f+1%max;
				r=r+1%max;
				a[r]=item;
				cout<<"rear"<<r<<endl;
				cout<<"front"<<f<<endl;
				cout<<"value at first ="<<a[r]<<endl;
			}
				else
				{
					r=r+1%max;
					a[r]=item;
					cout<<"rear in entring "<<r<<endl;
					cout<<"item ="<<a[r]<<endl;
				}
			}
		 void dequeue()
		 {
		 	if(f==-1 && r==-1)
		 	{
		 		cout<<"underflow";
			 }
			 else if(f==0 && r==0)
			 {
			  item=a[f];
			  f=-1;
			  r=-1;
			  cout<<"item at first location"<<item;
			  
			 }
			 else if(f==max-1 && r==0)
			 {
			 	item=a[f];
			 	f=f+1%max;
			 	cout<<"value of front after last"<<f;
			 	cout<<"item at last"<<item;
			 }
			 else
			 {
			 	item=a[f];
			 	f=f+1%max;
			 	cout<<"front"<<f;
			 	cout<<"value removed:"<<item;
			 }
		 }
		  
};



int main()
{
	cq q;
	int i;
	for(i=0;i<6;i++)
	q.enqueue();
	for(i=0;i<6;i++)
	q.dequeue();
	
	return 0;
}

