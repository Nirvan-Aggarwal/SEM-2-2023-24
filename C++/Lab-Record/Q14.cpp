#include<iostream>
using namespace std;
template <class T>
class SearchSet{
private:
	T arr[10];
	int size;
public:
	SearchSet(T arr[], int n)
	{
		size=n;
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
	}
bool searchElement(T key)
 {
 	for(int i=0;i<size;i++)
 	{
 	  if (arr[i]==key)
	   {
	   	return true;
		}	
	}
 	return false;
}
};
 int main()
 {
 	int intArr[]= {10,20,30,40,50};
 	double doubleArr[]= {1.1,2.2,3.3,4.4,5.5};
 	char charArr[]= {'A','B','C','D','E'};
 	
 	SearchSet<int> intSet(intArr,5);
 	SearchSet<double> doubleSet(doubleArr,5);
 	SearchSet<char> charSet(charArr,5);
 	
 	int intKey=30;
 	double doubleKey=3.3;
 	char charKey='F';
 	
 	if (intSet.searchElement(intKey)) {
 		cout<<"Integer element "<<intKey<<" found in the set."<<endl;
} else {
	cout<<"Integer element "<<intKey<<" not found in the set."<<endl;
}
   if (doubleSet.searchElement(doubleKey)) {
   	cout<<"Double element "<<doubleKey<<" found in the set."<<endl;
   } else {
   	cout<<"Double element "<<doubleKey<<" not found in the set."<<endl;
   }
   
   if (charSet.searchElement(charKey)) {
   	cout<<"Char element "<<charKey<<" found in the set."<<endl;
   } else {
   	cout<<"Char element "<<charKey<<" not found in the set."<<endl;
   }
   return 0;
 }
