#include <iostream>
#include <string>
#include "Array.hpp"



        Array::Array(){
           std::cout<<"constructor"<<std::endl;
            for (int i=0;i<1;i++){
                data.push_back(i);
            }
        }
        Array::~Array(){
            //delete[] data;
        }

        //copy constructor  
        Array::Array(const Array& rhs){
            std::cout<<"Copy Constructor"<<std::endl;
            
            for(int i=0;i<rhs.data.size();i++){
                data.push_back(rhs.data[i]);
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
            data.clear();
            
            for(int i=0;i<rhs.data.size();i++){
                data.push_back(rhs.data[i]);
            }
        }
        void Array::PrintingData(){
            for(int i=0; i<data.size();i++){
                std::cout<<data[i]<<std::endl;
            }
        }
        void Array::SetData(int index,int value){
            data[index]= value;
        }
 


