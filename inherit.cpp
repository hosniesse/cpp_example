#include <iostream>
#include <string>

 class Base{
    public: 
        Base(){

            std::cout<<"Base constructor"<<std::endl;
        }

        ~Base(){

            std::cout<<"Base Destructor"<<std::endl;
        }
        virtual void MemberFunc(){std::cout<<"base::MemberFunc()\n";}


            

 };

 class Derived : public Base{
    public:
    Derived(){
        std::cout<<"Derived constructor\n";

    }

    ~Derived(){
        std::cout<<"Derived Destructor\n";
    }
    void MemberFunc() override {std::cout<<"Derived::MemberFunc(\n";}

 };

int main(){
 
    Base* instance = new Base;
    instance->MemberFunc();
    delete instance;

    return 0;


}