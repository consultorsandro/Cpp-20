// Este arquivo trata da opção de múltiplas declarações na estrutura for
#include <iostream>

using std::cout;
using std::endl;

int main(){
// Primeiro as declarações múltiplas, o teste, e finalmente a regra de iteração
for (size_t i{0}, x {5}, y{22}; y > 15; ++i, x+=5 , y-=1) {
    cout << "i: " << i << ", x : " << x << ", y : " << y << endl;
}


    return 0;
}