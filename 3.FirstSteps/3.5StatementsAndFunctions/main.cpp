// Esta aula trata de como declarar instruções e funções em C++
#include <iostream>

using std::cout;
using std::endl;

//Declara a função soma
int soma(int parametro1, int parametro2) {
    int result = parametro1 + parametro2;
    return result;
}


int main(){
// Declara variáveis   
int nr01 {13};
int nr02 {7};

//Exibe o valor atribuído às variáveis
cout << "Nr01 : " << nr01 << endl;
cout << "Nr02 : " << nr02 << endl;

//Usa a função para obter o resultado da soma
int resultado = soma(13, 7);
cout << "O resultado e :" << resultado << endl;

//Reusa a função na mesma variável
resultado = soma(13, 8);
cout << "O resultado e :" << resultado << endl;

//Chama a função direto na instrução de saída
cout << "Resultado direto: " << soma(13,9) << endl;



    return 0;
}