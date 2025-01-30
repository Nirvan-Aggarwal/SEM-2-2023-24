#include<iostream>
#include<conio.h>
using namespace std;
int main()

{

int rows, cols;

cout << "Enter the number of rows: ";

cin >> rows;

cout << "Enter the number of columns: ";

cin >> cols;

// Allocate memory for the original matrix 
int** matrix =new int*[rows]; 
for (int i=0; i < rows; i++)
{
matrix[i]= new int[cols];
}
// Initialize the matrix

cout << "Enter the elements of the matrix:\n"; 
for (int i = 0; i < rows; i++)
{
for (int j=0; j < cols; j++)
{
cin >> matrix[i][j];
}
}

// Display the original matrix 
cout << "Original Matrix:\n";
 for (int i = 0; i < rows; i++)
{
for (int j=0; j < cols; j++)
{ 
cout << matrix[i][j] << " ";
}

cout <<endl;

} 
// Transpose the matrix 
int** transpose= new int*[cols]; 
for (int i=0; i < cols; i++)

{ 
transpose[i] = new int[rows];
 }
  for (int i=0; i < rows; i++)
{
for (int j = 0; j < cols; j++)
{
transpose[j][i] = matrix[i][j];

}

}

// Display the transposed matrix 
cout << "Transposed Matrix:\n"; 
for (int i = 0; i < cols; i++)
{
for (int j = 0; j < rows; j++)
{
cout << transpose[i][j] << " ";
}
cout <<endl;

}

 // Deallocate memory for the original matrix 
 for (int i=0; i < rows; i++) 
 { 
 delete[] matrix[i];

}

delete[] matrix;

 for (int i=0; i < cols; i++) 
  {  
 delete[] transpose[i];

}
delete[] transpose;
return 0;
}
