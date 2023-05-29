#include <iostream>

struct Person{
    public:
    Person(int age){     
        this->age=age;               //the age in constructor c'ant assigne same age with this  age=age;  solution we need to declared as "this->age=age;"
    }

    int Getage() const{
        return age;

    }
    ~Person(){                
        delete this;             // it can be used to delete memory  "it s better to avoid unless for specific manage the memory"
    }

    private:
        int age;

};
int main(){
    Person rana (5);

    std:: cout << rana.Getage()<<std::endl;

    return 0;
}