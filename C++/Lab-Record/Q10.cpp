#include<iostream>
using namespace std;
class Matrix
{
	private:
		int m[2][3], trans[3][2];;
	public:
		inputMatrix()
		{
			cout<<"Enter elements of the matrix: \n";
			for(int i=0;i<2;++i)
			{
				for(int j=0;j<3;j++)
				{
					cin>>m[i][j];
				}
			}
		}
		void operator++()
		{
			//Calculate the transpose
			for(int i=0;i<3;i++)
			{
				for(int j=0;j<2;j++)
				{
					trans[i][j]=m[j][i];
					cout<<trans[i][j]<<" ";
				}
				cout<<"\n";
			}
		}
};
	int main()
	{
		Matrix mat;
		mat.inputMatrix();
		cout<<"Transposed matrix."<<endl;
		++mat; //Transpose the matrix using the overloaded operator.
		return 0;
	}
