#include <iostream>
using namespace std;
main()
{
	int a[3][3];
	cout<<"Enter a 3x3 matrix"<<endl;
	for(int i=0;i<3;i++)
  {
  	for(int j=0;j<3;j++)
  	{
	  cin>>a[i][j];
    } 
  }
  cout<<"\n\n";
  cout<<"Transpose of 3x3 matrix"<<endl;
  	for(int i=0;i<3;i++)
  {
  	for(int j=0;j<3;j++)
  	{
	  cout<<a[j][i];
	  cout<<" ";
    } 
    cout<<"\n";
  }
  
}

