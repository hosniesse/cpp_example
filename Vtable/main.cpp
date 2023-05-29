#include <iostream>
#include <string>

 class Base{
    public: 
        Base(){

            std::cout<<"Base constructor"<<std::endl;
        }

        virtual ~Base(){

            std::cout<<"Base Destructor"<<std::endl;
        }
        virtual void MemberFunc(){
            std::cout<<"Base MemberFunc"<<std::endl;

        }         

 };

 class Derived : public Base{
    public:
    Derived(){
        std::cout<<"Derived constructor\n";
   
    }

    ~Derived(){
        std::cout<<"Derived Destructor\n";
    }
    void MemberFunc() override {
        std::cout<<"Derived MemberFunc\n";
    }

 };

int main(){
    // create a Base* that can point to 'Base' or 'Derived' ,i.e.anything
    //that 'is-a'.
    // we also have a Vtbl that is created for this instance of the object
    Base* instance = new Derived;
    //when we call a member function , the vtbl  points us to the correct
    //member function
    instance->MemberFunc();
    delete instance;

    instance = new Base;
    instance->MemberFunc();
    delete instance;
    return 0;


}