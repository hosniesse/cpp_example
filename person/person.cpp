#include "person.hpp"

struct Person::pImplPerson{
    std::string m_name;
    std::string m_strenth;
    std::string m_speed;

};

Person::Person(std::string s){    //Person constructor
    m_impl=new pImplPerson;         //more advanced pointer  m_impl=std::make_unique<pImplPerson>();  replace  m_impl=new pImplPerson;  
    m_impl->m_name=s;                 //and no need to delete  in destructo delete m_impl;
    m_impl->m_strenth ="n/a";
    m_impl->m_speed ="n/a";

}

Person::~Person(){             //Person destructor
    delete m_impl;
}

std::string Person::GetAttributes(){
    return m_impl->m_name + ","+ m_impl->m_strenth +"," +m_impl->m_speed ;
}