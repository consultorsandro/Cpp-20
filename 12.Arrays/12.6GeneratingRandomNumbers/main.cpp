// Função geradora de números randômicos e seus detalhes
#include <iostream>
#include <ctime> 

using std::cout, std::endl;

int main(){
    
/*
    //Gera um número aleatório somente na primeira vez, depoi repete
    int numQualquer = std::rand();
    cout << "numQualquer : " << numQualquer << endl;


    int numQualquer = std::rand();

    for(size_t i {0}; i < 20; ++i) {
        numQualquer = std::rand();
        cout << "numQualquer: " << numQualquer << endl;
    }
  
 
    int numQualquer = std::rand() % 11;// 0~10
    for(size_t i {0}; i < 20; ++i) {
        numQualquer = std::rand() % 11;
        cout << "numQualquer: "<< i <<  "  :    " << numQualquer << endl;
    }
 */
    
    std::srand(std::time(0)); //Para não repetir a "lista randômica"

  int numQualquer = std::rand() % 10 + 1; // não será na faixa de 0~10, mas de 1~10
    for(size_t i {0}; i < 20; ++i) {
        numQualquer = std::rand() % 11;
        cout << "numQualquer: "<< i <<  "  :    " << numQualquer << endl;
    }

    
 

    return 0;
}