#include <iostream>

using std::cout, std::endl;

int main(){

    /*
    //Declaração simples de array de int
    int scores [5]; //Sem inicializar, aparece lixo de memória

    //lendo
    cout << "scores [0]: " << scores[0] << endl;
    cout << "scores [1]: " << scores[1] << endl;
    */
/*
   //Extraindo dados de um array
   int arr[10];
   arr[0] = 20;
   arr[1] = 21;
   arr[2] = 22;

   for (size_t i {0}; i < 3; ++i) { // o teste é exatamente o índice da posição, no caso 4 posições 0..3
    cout << "arr [" << i << "] : " << arr[i] << endl;
   }
   
    // Extraindo dados por meio de loop
    int arr[10];
    for(size_t i{0}; i < 10; ++i){
        cout << "arr [" << i << "] : " << arr[i] << endl;
    }
*/
  /*
    // Inserindo dados por meio do loop (Tabuada)
    int scores[10];
    cout << endl;
    cout << "-- Tabuada de 9 -- " << endl;
   for(size_t i{0}; i < 9 ; ++i){
       scores[i] = i * 9;
       cout << "-> " << i << " * 9 = " << scores[i] << std::endl;
   }
   */

    //Declara e inicializa na mesma linha
    double sal[5] {12.7, 7.5, 13.2, 8.1, 9.3};

    for(size_t i{0}; i < 5; ++i) {
        cout << "Sal [" << i << "] :" << sal[i] << endl;
    }

    return 0;

}