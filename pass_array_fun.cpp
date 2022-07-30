#include <iostream>
using namespace std;

void myArr(int myNumbers[5]) {
  for (int i = 0; i < 5; i++) {
    cout << myNumbers[i] << "\n";
  }
}

int main() {
  int myNum[5] = {10, 20, 30, 40, 50};
  myArr(myNum);
  
  return 0;
}