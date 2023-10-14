#include "Employee.h"
#include <string.h>
using namespace std;
Employee::Employee()
{
    this->firstname = "default";
    this->lastname = "default";
    this->birthdate = Date();
    this->hiredate = Date();
}
Employee::Employee(string fn ,string ln , Date bd , Date hd)
{
    this->firstname = fn;
    this->lastname = ln;
    this->birthdate = bd;
    this->hiredate = hd;
}

Date Employee::getBd()
{
    return birthdate;
}

Date Employee::getHd()
{
    return hiredate;
}

void Employee::print()
{
    cout<<"birth Date :"<<this->birthdate.print()<<endl;
    cout<<"Name:"<<this->firstname<<" " <<this->lastname<<endl;
    cout<<"Hire Date:" <<this->hiredate.print();
}

Employee::~Employee()
{

}