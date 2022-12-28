// Esta aula trata do operador de controle de fluxo if
#include <iostream>

using std::cout;
using std::endl;

int main(){
/*
    int number1 {75};
    int number2 {60};
    bool result = (number1 < number2); //expressão que gera a condição

    //cout << std::boolalpha << "result: " << result << endl;

    cout << endl;
    cout << "free standing if statement" << endl;

    if(result) {
        if (result == true) {
            cout << number1 << "is less than " << number2 << endl;
        }
    }

    // Usando else
    cout << endl;
    cout << "Using the else clause: " << endl;
    if(result == true) {
        cout << number1 << " is less than " << number2 << endl;
    }else{
        cout << number1 << " is NOT less than " << number2 << endl;
        }
*/
/*
    
    // Usando a expressão como condição direta
    cout << endl;
    cout << "Using expression as condition: " << endl;

    if(number1 < number2){
        cout << number1 << " is less than " << number2 << endl;
    }else{
        cout << number1 << " is NOT less than " << number2 << endl;
        }
    */

    //ifs aninhados
    cout << endl;
    cout << "Nesting if statements" << endl;

    bool red = false;
    bool green {true};
    bool yellow {false};
    bool police_stop{true};

/*cout << endl;
    cout << "Police officer stops (less vebose)" << endl;
    if(green && !police_stop) {    //police_stop = false, por causa do !
        cout << "Go" << endl;
    }else{
        cout << "Stop" << endl;
    }
    */
    cout << endl;
    cout << "Police officer stops(verbose)" << endl; // verboso porque não usa operador relacional
    if(green) {
        if(police_stop){
            cout << "Stop" << endl;
        }
        else{
            cout << "Go" << endl;
        }
    }
    

    return 0;

}
 
