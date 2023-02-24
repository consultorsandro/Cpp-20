// Trata dos riscos de passar elementos além do tamanho do array.
#include <iostream>

using std::cout, std::endl;


int main(){

int numbers[] {1,2,3,4,5,6,7,8,9,0};

//Quando é passado valor além do array, lixo de memória é lido ou trava tudo.
cout << "numbers[12] : " << numbers[12] << endl;


    return 0;
}