#include <iostream>
#include <string>
#ifndef ARRAT_HPP
#define ARRAY_HPP


class Array{
    public:
    // Special Member function
    //(1) Constructor
        Array();
       //(2) Destroctor
        ~Array();
        
        
        // (3)copy constructor  
        Array(const Array& rhs);


        // (3 or 4) Copy Assignment operator
 

        Array& operator=(const Array& rhs);
 
        void PrintingData();
       
        void SetData(int index,int value);
       
    private:
        int* data;

};

#endif

