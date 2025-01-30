#include<iostream>
using namespace std;
namespace marks
{

	int a=6;
}
int main()
{
	int a=5;
	cout<<"the a form main() "<<a<<endl;
	cout<<"a value from marks scope "<<marks::a;
		return 0;
}
