#include<iostream>
using namespace std;
class cq
{
	public:
		int item,a[10],r,f,max;
		
		public:
			cq()
			{
				r=-1;
				f=-1;
				max=10;	
			}
		void enqueue()
		{
		   if(r==max-1)
			{
				cout<<"Queue is Overflowed"<<endl;
			}
			elseif(r==-1)
			{ 
			f=f+1;
			
			}
			else
			{
				r=r+1;
			    cout<<"Enter Item ";
			    cin>>item;
				a[r]=item;
				cout<<"Entered "<<item<<" in Queue and rear position is "<<r<<endl;
				
			}
		}
		void dequeue()
		{
		 	if(r==-1)
		 	{
		 		cout<<"Queue is Underflow"<<endl;
			}
			else
			{
				cout<<"Removed "<<a[f]<<endl;
			 	item=a[f];
			 	for(int i=0 ; i<=r ; i++)
			 	{
			 		a[i]=a[i+1];
				}
				r=r-1;
			}
		}
};

int main()
{
	cq q;
int choice;
    
    do {
        cout << "Enter your choice:\n";
        cout << "1. Enqueue\n";
        cout << "2. Dequeue\n";
        cout << "3. exit\n";
        cin >> choice;

        switch (choice) {
            case 1:
                q.enqueue();
                cout<<endl;
                break;
            case 2:
                q.dequeue();
                cout<<endl;
                break;
            case 3:
                cout << "Exiting program.\n";
                cout<<endl;
                break;   
            default:
                cout << "Invalid choice! Please try again.\n";
                cout<<endl;
        }
    } while (choice != 3);
    
    return 0;
		
}

