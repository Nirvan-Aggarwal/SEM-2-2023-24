#include<iostream>
using namespace std;
int main()
{
		int a=5,b=5,c=7,r;
	cout<<"Logical Operators\n";
	r=(a==b)&&(c>b);
	cout<<"(a==b)&&(c>b) is ";
	cout<<r<<endl;
	r=(a==b)&&(c<b);
	cout<<"(a==b)&&(c<b) is ";
	cout<<r<<endl;
	r=(a==b)||(c>b);
	cout<<"(a==b)||(c>b) is ";
	cout<<r<<endl;
	r=(a!=b)||(c<b);
	cout<<"(a!=b)||(c<b) is ";
	cout<<r<<endl;
	r=(a!=b);
	cout<<"(a!=b) is ";
	cout<<r<<endl;
		return 0;
}
