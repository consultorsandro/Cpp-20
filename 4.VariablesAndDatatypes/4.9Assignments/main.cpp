#include <iostream>

using std::cout, std:: endl;

int main(){

    int var1{123};
    cout << "var1 : " << var1 << endl;

    var1 = 55;
    
    cout << endl;

    float var2 {44.55};
    cout << "var2 : " << var2 << endl;
    

    var2 = 99.99;
    cout << "var2 : " << var2 << endl;

    cout << endl;
    cout << "-------------------" << endl;
    cout << endl;

    bool state{false};
    cout << std::boolalpha;
    cout << "state: " << state << endl;

    state = true;
    cout << "state: " << state << endl;


    return 0;
}