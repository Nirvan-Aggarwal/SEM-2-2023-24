#include<iostream>
using namespace std;
//Base class with public members
class BasePublic
{
	public:
		int publicData;
		BasePublic(int data)
		{
			publicData=data;
			cout<<"BasePublic constructor.\n";
		}
		void showPublicData()
		{
			cout<<"BasePublic's publicData:"<<publicData<<endl;
		}
};
//Derived class using public inheritance
class DerivedPublic : public BasePublic
{
	public:
		int derivedData;
		DerivedPublic(int baseData, int Data):BasePublic(baseData)
		{
			derivedData=Data;
			cout<<"DerivedPublic constructor."<<endl;
		}
		void showDerivedData(){
			cout<<"DerivedPublic's derivedData:"<<derivedData<<endl;
		}
};
//Base class with private memebers
class BasePrivate{
	private:
		int privateData;
	public:
	    BasePrivate(int data)
		{
			privateData=data;
			cout<<"Base private construtor."<<endl;
		}
		void showPrivateData(){
			cout<<"BasePrivate's private data:"<<privateData<<endl;
			
		}		
};
//Derived class using private inheritance
class DerivedPrivate: private BasePrivate{
	public:
		int derivedData;
		DerivedPrivate(int baseData,int Data):BasePrivate(baseData)
		{
			derivedData=Data;
			cout<<"DerivedPrivate constructor."<<endl;
		}
		//Access to showPrivateData is not allowed from DerivedPrivate
};
int main(){
	//Public inheritance
	cout<<"Public Inheritance"<<endl;
	DerivedPublic dp(10,20);
	dp.showPublicData();
	dp.showDerivedData();
	//Private inheritance
	cout<<"\nPrivate Inheritance."<<endl;
	DerivedPrivate dpr(30,40);
	//dpr.showPrivateData();
	//This line would result in compilation error
	return 0;
}

