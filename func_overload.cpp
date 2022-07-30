#include <iostream>
using namespace std;

int sum(int a, int b){
	return a+b;
}
	
double sum(double a, double b){
	return a+b;
}
	
int main(){
	int a = sum(5,7);
	double b = sum(3.3,2.4);
	
	cout<<a<<endl;
	cout<<b<<endl;
	
	return 0;
}