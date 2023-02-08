/* Esta aula trata de funções para array a partir da versão C++ 17
    Trata também de iterações menos verbosas comparadas com versões anteriores
*/

/*
contém o exemplo de extrair os números repetidos de um array
*/
#include <iostream>
#include <map>

using namespace std;

int main(){
/*
    int scores[] {1,2,3,4,5,6,7,8,9,10};

    /*
    int count {size(scores)};

    for(size_t i {0}); i < count; ++1){
        cout << "scores [" << i << "] : " << scores[i] << endl;
    }
  
    //Range based for loop
    for (auto i : scores){
        cout << "Value : " << i << endl;
    }
*/
/*
    int collection_size;
    cin >> collection_size;
    int collection[collection_size];
    map<int, int> num_count;
    
    for (int i = 0; i < collection_size; i++) {
        int num;
        cin >> num;
        collection[i] = num;
        num_count[num]++;
    }
    
    cout << "A coleção contém ";
    int non_repeated = 0;
    for (int i = 0; i < collection_size; i++) {
        if (num_count[collection[i]] == 1) {
            non_repeated++;
        }
    }
    cout << non_repeated << " algarismos que não se repetem: ";
    
    for (int i = 0; i < collection_size; i++) {
        if (num_count[collection[i]] == 1) {
            cout << collection[i] << " ";
        }
    }
    */

   
    return 0;
} 