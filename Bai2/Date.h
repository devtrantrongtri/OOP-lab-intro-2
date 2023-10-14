#ifndef DATE_H
#define DATE_H
#include <iostream>
using namespace std;
#pragma once

class Date
{
public:
    Date();
    Date(int d,int m,int y);
    string print();
    bool isLeapYear(int year);
    bool isDateForm(int d, int m ,int y);

    ~Date();

private:
    int day;
    int month;
    int year ;

};

#endif