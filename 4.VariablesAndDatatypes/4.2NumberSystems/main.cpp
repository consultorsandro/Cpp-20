// Esta aula trata de números nas bases binária, decimal, hexadecimal e octal 

#include <iostream>

int main(){
   
   //Declara  e inicializa variáveis. Na inicialização define a base
   int number1 = 15; //decimal
   int number2 = 017; //Octal
   int number3 = 0x0F; //hexadecimal
   int number4 = 0b00001111; //binary

   std::cout << "number1 : " << number1 << std::endl;
   std::cout << "number2 : " << number2 << std::endl;
   std::cout << "number3 : " << number3 << std::endl;
   std::cout << "number4 : " << number4 << std::endl;


}