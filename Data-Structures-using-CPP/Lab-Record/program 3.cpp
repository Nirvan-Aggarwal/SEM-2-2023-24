#include<iostream>
using namespace std;
int main()
{
	int a[3][3],i,j;
	static int count =0;
	cout<<"enter the mattrix"<<endl;
	
	//initializing
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cin>>a[i][j];
		}
	}
	
	//counting
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(a[i][j]== 0)
			{
				count=count+1;
			}
			
		}
	}
	
	//checking if its sparse or not
	cout<<"the no.of zeros are "<<count<<endl;
	if(count > (i*j)/2)
	{
		cout<<"matrix is sparse";
	}
	else
	{
		cout<<"matrix is not sparse";
	}
	return 0;
}
