#include <iostream>
using namespace std;

void func(string name="Arbaj"){
	cout<<"Your name is "<<name<<endl;
}
	
int main(){
	func();
	func("Ali");
	return 0;
}