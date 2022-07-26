#include <iostream>
using namespace std;
int main()
{
	int a[4] = {1,2,3,4};
	int arrayLen = sizeof(a)/sizeof(int);
	for(int i = 0; i<arrayLen; i++)
	{
		cout<<a[i]<<endl;
	}
	return 0;
}