#include <iostream>
#include <string>
#include "Array.hpp"


void printAnArray(const Array& a){   //pass by reference to avoid copie
    
}

//void printAnArray(Array a){
    //a.PrintingData();
//}

int main(){
    Array myArray;
    // Array  myArray2 = myArray;   copie befor set  


    myArray.SetData(0,10000);
    myArray.SetData(1,100);
    myArray.SetData(2,254);
    myArray.SetData(3,365);

    //Array  myArray2 = myArray;  // if copie is made here  its identique 

    Array  myArray2;
    myArray2 = myArray;    // Copy Assignment  operator                     
    //myArray.PrintingData();
    
    //myArray2.PrintingData();

    printAnArray(myArray);

    

    return 0;


}