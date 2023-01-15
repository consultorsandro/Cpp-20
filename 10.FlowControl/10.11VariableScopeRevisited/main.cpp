// Este arquivo trata do escopo de variáveis

#include <iostream>
using std::cout;
using std::endl;


int global_var{44};

int main() {

    bool green {false};

    global_var++;
    if (green)
    {
        global_var++; // 45
        int car_count{23};
    cout << "Light is green " << car_count << "on the move!" << endl;
    }else{
        //car_count++; // compiler error, out of the scope
        global_var++; //46
        cout << "LIght is not green. Everybody should stop! " << endl;
    }
    
    cout << " The value of global_var is: " << global_var << endl;


    return 0;

}