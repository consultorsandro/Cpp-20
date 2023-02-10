//Trata da aula array de caracteres e os recursos de finalização nula '\0' e exibição sem loop
#include <iostream>

using std::cout, std::cin, std::endl;

int main(){
    //Declara o array
    //char message [5] {'H', 'e', 'l','l','o'};
    char message [6] {'H', 'e', 'l','l','o'};

    /*
    //Exibe o a saída do array por loop

    cout << "Message: ";
    for (auto c : message) {
        cout << c;
    }
    cout << endl;
    */
    //Impressão direta (possível saída com lixo) 
    //cout << "Message: " << message << endl;

    //C - String
    char message1 [] {'H', 'e', 'l','l','o','\0'};
    cout << "Message1: " << message1 << endl;
    cout << "Sizeof(Messege1): " << sizeof(message1) << endl;


    //Teminação nula realizada pelo compilador
    char message2 [6] {'H', 'e', 'l','l','o'};
    cout << "Message2: " << message2 << endl;
    cout << "Sizeof(Messege2): " << sizeof(message2) << endl;

    //Novo erro por falta de teminação nula
    char message3 [] {'H', 'e', 'l','l','o'};
    cout << "Message3: " << message3 << endl;
    cout << "Sizeof(Messege3): " << sizeof(message3) << endl;


    //Imprimindo o tipo literal String (isso não dá certo com integers)
    char message4 [] {"Hello World"};
    cout << "Message4: " << message4 << endl;
    cout << "Sizeof(Messege4): " << sizeof(message4) << endl;

     


    return 0;
}