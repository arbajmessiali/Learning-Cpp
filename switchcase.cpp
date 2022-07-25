#include <iostream>
using namespace std;
int main()
{
int a = 4;
string s;
switch(a)
{
case 1:
s = "One";
break;	
case 2:
s = "Two";
break;
case 3:
s = "Three";
break;
case 4:
s = "Four";
break;
default:
s = "Random";
}
cout<<s<<endl;
return 0;
}