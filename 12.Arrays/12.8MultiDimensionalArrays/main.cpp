#include <iostream>

using std::cout, std::endl;

int main(){

//int packages [3][4];
int packages [3][4]{
    {1,2,3,4},
    {5,6,7,8},
    {9,10,11,12}
};
/*for(size_t i{0}; i < 3; ++i){

    for(size_t j{0}; j < 4; ++j){
        cout << packages[i][j] << "  ";
    }
    cout << endl;
}*/

/*
 int house_block [7] [5] [3] {
        {
            {1,2,3},{4,5,6},{7,8,9},{10,11,12},{13,14,15} 
        },
        {
            {16,17,18},{19,20,21},{22,23,24},{25,26,27},{28,29,30}  
        },
        {
            { 31,32,33},{34,35,36},{37,38,39},{40,41,42},{43,44,45} 
        },
        {
             {46,47,48},{49,50,51},{52,53,54},{55,56,57},{58,59,60}  
        },
        {
             {61,62,63},{64,65,66},{67,68,69},{70,71,72},{73,74,75} 
        },
        {
            {76,77,78},{79,80,81},{82,83,84},{85,86,87},{88,89,90}  
        },
        {
             {91,92,93},{94,95,96},{97,98,99},{100,101,102},{103,104,105} 
        }
    };



for(size_t i{0}; i < std::size(house_block); ++i){

    for(size_t j{0}; j < std::size(house_block[i]); ++j){

        for(size_t k{0}; k < std::size(house_block[i][j]); ++k){
            
            cout << house_block[i][j][k] << "     ";
        }
    }
}
*/
 int packages2 [] [5] {
        {1,2,3},
        {4,5,6},
        {7,8,9},
        {10,11,12},
		{100,110,120} // Can add as many triplets in packages2 as we want
    };

    cout << endl;

    for (size_t i = 0; i < std::size(packages2); i++){
        for (size_t j = 0; j < std::size(packages2[i]); j++){
            
            cout << "Item (" << i << "," << j << ") : " << packages2[i][j] << endl;
        }
    }
    

    return 0;
}