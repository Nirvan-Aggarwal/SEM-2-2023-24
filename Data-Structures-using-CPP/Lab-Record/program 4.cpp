#include <iostream>
#include <string.h>
using namespace std;
int main ()
{
	int a;
	char nm[]="Jhon ";
	char snm[]="Doe";
	
	cout<<"First name: "<<nm<<endl;
	cout<<"Last name: "<<snm<<endl;

	strcat(nm,snm);
	cout<<"Full name: ";
	cout<<nm<<endl;
	
	strcpy(nm,snm);
	cout << "The new string will be ";
	cout << nm<<endl;
	
	a=strcmp(nm,snm);
	cout<<"By comparing the 2 strings,it is ";
	cout<<a<<endl;
	
	a=strlen(nm);
	cout<<"The no.of characters of the new string is "<<a;
	
return 0;
}
