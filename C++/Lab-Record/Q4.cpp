#include<iostream>
using namespace std;
class Matrix; //Forward declaration
class MatrixAdder
{
	public:
		static void addMatrices(const Matrix &mat1, const Matrix &mat2);
};
class Matrix
{
	private:
		int rows;
		int cols;
		int** data;
	public:
		Matrix(int r, int c) : rows(r), cols(c)
		{
			data = new int*[rows];
			for(int i=0;i<rows;i++)
			{
				data[i]= new int[cols];
			}
		}
		void fillMatrix()
		{
			cout<<"Enter elements of a"<<rows<<"x"<<cols<<"matrix:\n";
			for(int i=0;i<rows;i++){
			 for(int j=0;j<cols;j++){
			 	cin>>data[i][j];
			 }
		}
	}
	friend void MatrixAdder::addMatrices(const Matrix &mat1, const Matrix &mat2);
	void displayMatrix()
	{
		for(int i=0;i<rows;i++){
			for(int j=0;j<cols;j++){
				cout<<data[i][j]<<"\n";
			}
			cout<<endl;
		}
	}
	~Matrix()
	{
		for(int i=0;i<rows;i++)
		{
			delete[] data[i];
		}
		delete[] data;
	}
};
void MatrixAdder::addMatrices(const Matrix &mat1, const Matrix &mat2)
{
	if(mat1.rows != mat2.rows || mat1.cols != mat2.cols)
	{
		cout<<"Matrix dimensions are not compatible for addition"<<endl;
		return;
	}
	Matrix result(mat1.rows, mat1.cols);
	for(int i=0;i<result.rows;i++)
	{
		for(int j=0;j<result.cols;j++)
		{
			result.data[i][j]= mat1.data[i][j] + mat2.data[i][j];
		}
	}
	cout<<"Sum of the matrices:\n";
	result.displayMatrix();
}
int main()
{
	int rows,cols;
	cout<<"Enter the rows:\n";
	cin>>rows;
	cout<<"Enter the columns:\n";
	cin>>cols;
	Matrix matrix1(rows,cols);
	matrix1.fillMatrix();
	Matrix matrix2(rows,cols);
	matrix2.fillMatrix();
	MatrixAdder::addMatrices(matrix1,matrix2);
	return 0;
}

