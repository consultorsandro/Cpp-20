//Esta aula trata do caracter char e sua relação com o padrão ASCII UNICODE

#include <iostream>
using std::cout;
using std::endl;


int main(){
  
  char letra1 {'a'};
  char letra2 {'b'};
  char letra3 {'c'};
  char letra4 {'d'};
  char letra5 {'e'};

//One byte in memory : 2^8 = 256 different values (0 ~ 255)
cout << endl;

char value = 65; // ASCII character code for 'A'
cout << "value: " << value << std:: endl; // exit A
cout << "value(int): " << static_cast<int>(value) << endl;

    return 0;
}