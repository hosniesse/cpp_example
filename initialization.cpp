#include <iostream>
#include <string>

/*struct Entity{

            //constructor
        /*Entity(): name("rana"),x(0), y(0), collection(nullptr){

        }*/
       /* Entity() = default;     // defeult constructor can initialize to zero 


        std::string name;
        int* collection ;     //pointer
        int x;
        int y;
 };

       



int main(){
 
    Entity e{};                              // add {}  will make values=0
    std::cout<<e.name<<std::endl;   
    std::cout<<e.collection<<std::endl;      
    std::cout<<e.x<<std::endl;         
    std::cout<<e.y<<std::endl; 
      

  

    return 0;


}*/




 struct Entity{

            //constructor
        Entity(): name("rana"),x(2), y(3), collection(nullptr){   //the initialization in constructor will be the result over the rest of init

        }
        


        std::string name;
        int* collection {nullptr};     //pointer
        int x{1};
        int y{7};
 };

       



int main(){
 
    Entity e{};                              // add {}  will make values=0
    std::cout<<e.name<<std::endl;   
    std::cout<<e.collection<<std::endl;      
    std::cout<<e.x<<std::endl;         
    std::cout<<e.y<<std::endl; 
      

  

    return 0;


}