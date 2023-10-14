#ifndef EMPLOYEE_H
#define EMPLOYEE_H
using namespace std;
#include <iostream>
#include<string>
#include "Date.h"
#pragma once

class Employee  
{
public:
    Employee();
    Employee(string fn ,string ln , Date bd , Date hd);
    Date getBd();
    Date getHd();
    void print();
    ~Employee();

private:
    string firstname;
    string lastname;
    Date birthdate;
    Date hiredate;

};

#endif