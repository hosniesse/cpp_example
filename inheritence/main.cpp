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

        public:
            int m_base_public_member_variable;
        protected:
            int m_base_protected_member_variable;
        private:
            int m_base_private_member_variable;

            

 };

 class Derived : public Base{
    public:
    Derived(){
        std::cout<<"Derived constructor\n";
        m_base_protected_member_variable= 777;
        m_base_public_member_variable =123;
 //       m_base_private_member_variable = 4444;
    }

    ~Derived(){
        std::cout<<"Derived Destructor\n";
    }

 };

int main(){
 
    Derived d;
        //m_base_protected_member_variable= 75557;
        //m_base_public_member_variable =123;
        //m_base_private_member_variable = 4444;

    return 0;


}