#include <iostream>
using namespace std;
int main()
{
	//creating the structure
	struct employee {
		int id;
		string name;
		int age;
	};
	
	//defining the structure variable
	employee emp1;
	employee emp2;
	
	//putting values in structure variables
	emp1.id = 101;
	emp1.name = "Arbaj Ali";
	emp1.age = 26;
	
	emp2.id = 102;
	emp2.name = "John Collins";
	emp2.age = 24;
	
	//printing the values of the member variables;
	cout<<emp1.id<<" "<<emp1.name<<" "<<emp1.age<<endl;
	cout<<emp2.id<<" "<<emp2.name<<" "<<emp2.age<<endl;
	
	return 0;
}