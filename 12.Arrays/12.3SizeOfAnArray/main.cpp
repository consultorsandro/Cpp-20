/* Esta aula trata de funções para array a partir da versão C++ 17
    Trata também de iterações menos verbosas comparadas com versões anteriores
*/
#include <iostream>

using std::cout, std::endl, std::size;

int main(){

    int scores[] {1,2,3,4,5,6,7,8,9,10};

    /*
    int count {size(scores)};

    for(size_t i {0}); i < count; ++1){
        cout << "scores [" << i << "] : " << scores[i] << endl;
    }
    */
    //Range based for loop
    for (auto i : scores){
        cout << "Value : " << i << endl;
    }

    return 0;
} 