// Este arquivo trata de operação e loop com for e boas práticas no uso de suas variáveis

#include <iostream>
using std::cout;
using std::endl;

int main(){

//Use size_t. A representation of some unsigned int for positive numbers

/*
for(size_t i{0}; i < 10; ++i){
    cout << i << ": I love C++" << endl;
}
    cout <<  "Loop done" << endl;
*/
// Iterator declared outside the loop
/*
size_t i{0};
for( i; i < 10; ++i){
    cout << i << " : I love C++" << endl;

}
*/
// The variable test declared outside the loop
const size_t COUNT {100};

for(size_t i{0}; i < COUNT; ++i){
    cout << i << " : I love C++" << endl;
}
cout << "Loop done!" << endl;

    return 0;
}