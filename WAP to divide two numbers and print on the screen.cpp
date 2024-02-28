#include <iostream>

using namespace std;

int main() {
  
  int num1, num2;

  
  cout << "Enter two numbers: ";
  cin >> num1 >> num2;

  float result = (float) num1 / num2;

  cout << "The result of dividing " << num1 << " by " << num2 << " is " << result << endl;

  return 0;
}