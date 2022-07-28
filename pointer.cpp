#include <iostream>
using namespace std;
int main()
{
	string name = "Arbaj";
	string* ptr = &name;
	
	cout<<name<<endl;
	cout<<ptr<<endl;
	cout<<*ptr<<endl;
	
	//changing values using pointer
	*ptr = "Ali";
	
	cout<<*ptr<<endl;
	cout<<ptr<<endl;
	cout<<name;
	
	return 0;
}