#include<iostream>
using namespace std;
class base
{
	public:
		virtual void show()
		{
			cout<<"This is base class."<<endl;
		}
};   
class derived : public base
{
	public:
		void show()
		{
			cout<<"This is derived class."<<endl;
		}
};
int main()
{
	base *basePointer;
	derived derivedObject;
	basePointer=&derivedObject;
	basePointer->show();
	return 0;
}
