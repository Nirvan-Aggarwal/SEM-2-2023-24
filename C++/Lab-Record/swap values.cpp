#include<iostream>
using namespace std;

void swap(int *p,int *q)

{

int c;

c=*p;

*p=*q;

*q=c;

}
int main()
{
int a,b;

cout<<"enter any 2 numbers"<<endl;

cin>>a>>b;

cout<<"display a value and b value before swap "<<a<<" "<<b<<endl;

swap(&a,&b);

cout<<"\ndisplay a value and b value after swap using pointers "<<a<<" "<<b<<endl;

return 0;
}

