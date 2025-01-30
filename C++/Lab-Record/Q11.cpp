#include<iostream>
using namespace std;
class Matrix
{
	private:
		int mat[2][3];
	public:
		inputMatrix()
		{
			cout<<"Enter the elements of the Matrix:\n";
			for(int i=0;i<2;i++)
			{
				for(int j=0;j<3;j++)
				{
					cin>>mat[i][j];
				}
			}
		}
		friend void operator+(Matrix a,Matrix b)
		{
			//Calculate the addition
			Matrix c;
			for(int i=0;i<2;i++)
			{
				for(int j=0;j<3;j++)
				{
					c.mat[i][j]=a.mat[i][j]+b.mat[i][j];
					cout<<c.mat[i][j]<<" ";
				}
				cout<<"\n";
			}
		}
		
};
int main()
{
	Matrix x,y;
	x.inputMatrix();
	y.inputMatrix();
	cout<<"Addition of the 2 matrices."<<endl;
	x+y;
	//Addition of the two matrices using overloaded operator
	return 0;
}
