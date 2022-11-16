#include <iostream>

using std::cout;
using std::endl;

int main(){

int number1{2};
int number2{7};
// soma simples

int result = number1 + number2;
cout << "result: " << result << endl;

// modulo

result = number2 % number1;
cout << "result: " << result << endl;

result = 31 % 10;
cout << "result: " << result << endl;

    return 0;
}