#ifndef PERSON_HPP
#define PERSON_HPP

#include <string>

class Person{
    public:
    Person(std::string s);
    ~Person();
    std::string GetAttributes();

    private:
    struct pImplPerson;
    pImplPerson* m_impl;      //more advanced pointer    std::unique_ptr<pImplPerson>m_impl;
};

#endif

