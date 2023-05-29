#include <iostream>
#include <string>


class Array{
    public:
        Array(){
            data=new int[10];
            for (int i=0;i<10;i++){
                data[i]=i*i;
            }
        }
        ~Array(){
            delete[] data;
        }

        //copy constructor  
        Array(const Array& rhs){
            std::cout<<"Copy Constructor"<<std::endl;
            data = new int[10];
            for(int i=0;i<10;i++){
                data[i] = rhs.data[i];
            }
        }

        //  Copy Assignment operator
        // Object is already  constructed , we are just
        // making a copy later (e.g. myArray2 = myArray)

        Array& operator=(const Array& rhs){
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
        void PrintingData(){
            for(int i=0; i<10;i++){
                std::cout<<data[i]<<std::endl;
            }
        }
        void SetData(int index,int value){
            data[index]= value;
        }
    private:
        int* data;

};

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
    myArray.PrintingData();
    
    myArray2.PrintingData();

    

    return 0;


}