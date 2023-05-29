#include <iostream>
#include <string>

 class EntityBase{
    public: 
        EntityBase(){

            std::cout<<"Base constructor"<<std::endl;
        }

        ~EntityBase(){

            std::cout<<"Base Destructor"<<std::endl;
        }
 private:
    std::string m_name;


            

 };

 class Monster : public EntityBase{
    public:
    Monster(){
        std::cout<<"Monster constructor\n";

    }

    ~Monster(){
        std::cout<<"Monster Destructor\n";
    }

 };

int main(){
 
    Monster badmonster;


    return 0;


}