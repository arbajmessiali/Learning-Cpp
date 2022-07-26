#include <iostream>
using namespace std;
int main()
{
	struct {
		int age;
		string name;
		string gender;
	} person;
	
	person.age = 26;
	person.name = "Arbaj";
	person.gender = "male";
	
	cout<<person.age<<endl;
	cout<<person.name<<endl;
	cout<<person.gender<<endl;
	
	return 0;
}