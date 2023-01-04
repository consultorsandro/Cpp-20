// Esta aula trata do controle de fluxo else if
#include <iostream>

using std::cout;
using std::endl;

//Tools 
const int Pen {10};
const int Marker{ 20 };
const int Eraser{ 30 };
const int Rectangle{ 40 };
const int Circle{ 50 };
const int Ellipse{ 60 };


int main(){

    int tool {Pen};

    if (tool == Pen) {
        cout << "Active tool is pen" << endl;
    }
    else if (tool == Marker)
    {
        cout << "Active tool is Marker" << endl;
    }
    else if (tool == Eraser) {
        std::cout << "Active tool is Eraser" << std::endl;
    }
    else if (tool == Rectangle) {
        std::cout << "Active tool is Rectangle" << std::endl;
    }
    else if (tool == Circle) {
        std::cout << "Active tool is Circle" << std::endl;
    }
    else if (tool == Ellipse) {
        std::cout << "Active tool is Ellipse" << std::endl;
    }
    
    cout << "Go running..." << endl;
    
 
    return 0;
}