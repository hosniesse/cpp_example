#include <iostream>


template <typename T>
T square(T input){

return input*input;
}








/*int square (int input){         //insted of making copie and paste for ather diiferent type 
    return inpute*input;        //like float or double we use template 
}*/

int main (){


    std::cout<<square(5)<<std::endl;
    std::cout<<square(5.5)<<std::endl;
    std::cout<<square(6.5f)<<std::endl;

    return 0;
}