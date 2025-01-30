#include<iostream>
#include<math.h>
using namespace std;

//Function to calculate the area of a circle
double calculateArea(double radius)
{
	return(3.14*radius*radius);
}
//Function to calculate the area of a rectangle
double calculateArea(double length, double width)
{
	return(length*width);
}
//Function to calculate the surface area of a cube
double calculateArea(double length, double width, double height)
{
	return 2*(length*width+ width*height+ height*length);
}
int main()
{
	double radius, length, width, height;
	cout<<"Enter the radius of circle:\n";
	cin>>radius;
	cout<<"Enter the length and width of rectangle:\n";
	cin>>length>>width;
	cout<<"Enter the length, width and height of cube:\n";
	cin>>length>>width>>height;
	double circleArea=calculateArea(radius);
	double rectangleArea=calculateArea(length, width);
	double cubeArea=calculateArea(length, width, height);
	cout<<"Area of circle: "<<circleArea<<endl;
	cout<<"Area of rectangle: "<<rectangleArea<<endl;
	cout<<"Surface area of the cube: "<<cubeArea<<endl;
	return 0;
}
