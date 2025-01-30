#include<iostream>
#include<string>
using namespace std;
int main()
{
    string name1="Nirvan1",name2="Nirvan12",name3="Nirvan",name4="replaced";
    
    cout<<name1.compare(name1)<<endl;
    cout<<name1.compare(name2)<<endl;
    cout<<name1.compare(name3)<<endl;
    
	cout<<name1.append(name2)<<endl;
	
	cout<<name3.replace(0,7,name4);
	return 0;
}
