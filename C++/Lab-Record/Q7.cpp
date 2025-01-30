#include<iostream>
using namespace std;
class Matrix
{
	private:
		int rows,cols;
		int **data;
	public:
		//Constructor to allocate memory and initialize the matrix
		Matrix(int r, int c) : rows(r),cols(c){
			data=new int*[rows];
			for(int i=0;i<rows;++i){
				data[i]= new int[cols];
			}
		}
		//Copy constructor to allocate memory and copy data
		Matrix(const Matrix&other) : rows(other.rows), cols(other.cols){
			data = new int*[rows];
			for(int i=0;i<rows;++i){
				data[i]=new int[cols];
				for(int j=0;j<cols;++j){
					data[i][j]=other.data[i][j];
				}
			}
		}
		//Function to set the values in the matrix
		void setMatrix(){
			cout<<"Enter the values:"<<endl;
			for(int i=0;i<rows;++i){
				for(int j=0;j<cols;++j){
					cin>>data[i][j];
				}
			}
		}
		//Function to display the matrix
		void displayMatrix(){
			for(int i=0;i<rows;++i){
				for(int j=0;j<cols;++j){
					cout<<data[i][j]<<" ";
				}
				cout<<endl;
			}
		}
		//Function to add two matrices
		Matrix add(const Matrix&other){
			if (rows!=other.rows || cols!=other.cols){
				cout<<"Matrix cannot be added."<<endl;
				return Matrix(0,0);
			}
			Matrix result(rows,cols);
			for(int i=0;i<rows;++i){
				for(int j=0;j<cols;++j){
					result.data[i][j]=data[i][j]+other.data[i][j];
				}
			}
			return result;
		}
		//Demonstrator to free allocated memory
		~Matrix(){
			for(int i=0;i<rows;++i){
				delete[] data[i];
			}
			delete[] data;
		}
};
int main(){
	int rows,cols;
	cout<<"Enter the number of rows and columns : ";
	cin>>rows>>cols;
	Matrix matrix1(rows,cols);
	Matrix matrix2=matrix1;
	//Use the copy constructor to initialize the matrix2
	cout<<"For Matrix 1: "<<endl;
	matrix1.setMatrix();
	cout<<"For Matrix 2: "<<endl;
	matrix2.setMatrix();
	Matrix result=matrix1.add(matrix2);
	cout<<"Matrix 1: "<<endl;
	matrix1.displayMatrix();
	cout<<"Matrix 2 : "<<endl;
	matrix2.displayMatrix();
	cout<<"Sum of the 2 matrices : "<<endl;
	result.displayMatrix();
	return 0;
}
 
