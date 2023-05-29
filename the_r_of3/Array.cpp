#include <iostream>
#include <string>
#include "Array.hpp"



        Array::Array(){
            data=new int[10];
            for (int i=0;i<10;i++){
                data[i]=i*i;
            }
        }
        Array::~Array(){
            delete[] data;
        }

        //copy constructor  
        Array::Array(const Array& rhs){
            std::cout<<"Copy Constructor"<<std::endl;
            data = new int[10];
            for(int i=0;i<10;i++){
                data[i] = rhs.data[i];
            }
        }

        //  Copy Assignment operator
        // Object is already  constructed , we are just
        // making a copy later (e.g. myArray2 = myArray)

        Array& Array:: operator=(const Array& rhs){
            std::cout<<"Copy assignment operator"<<std::endl;

            if (&rhs == this){   // "this"  is a pointer to current instance of the object
                    return *this;
            }
            delete[]data;
            data = new int[10];
            for(int i=0;i<10;i++){
                data[i] = rhs.data[i];
            }
        }
        void Array::PrintingData(){
            for(int i=0; i<10;i++){
                std::cout<<data[i]<<std::endl;
            }
        }
        void Array::SetData(int index,int value){
            data[index]= value;
        }
 


