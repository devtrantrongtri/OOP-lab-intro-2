#include "Date.h"
#include <string>
using namespace std;
Date::Date(){
    this->day = 1;
    this->month =1;
    this->year=1900;
}
Date::Date(int d, int m, int y)
{
    if(isDateForm(d,m,y)){
        this->day = d;
        this->month = m;
        this->year = y;
    }else{
        this->day = 1;
        this->month = 1;
        this->year = 1900;
    }
}

string Date::print() {
        return to_string(day) + "/" + to_string(month) + "/" + to_string(year);
    }

   

    bool Date::isLeapYear(int year) 
    {
        return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
    }

    bool Date::isDateForm(int d , int m ,int y) 
    {
        // Kiểm tra tháng hợp lệ
        if (m < 1 || m > 12) {
            return false;
        }
        // Kiểm tra ngày hợp lệ
        if (d < 1) {
            return false;
        }
        switch (m) {
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                if (d > 31) {
                    return false;
                }
                break;
            case 4: case 6: case 9: case 11:
                if (d > 30) {
                    return false;
                }
                break;
            case 2:
                if (isLeapYear(y)) {
                    if (d > 29) {
                        return false;
                    }
                } else {
                    if (d > 28) {
                        return false;
                    }
                }
                break;
        }
        return true;
    }

Date::~Date()
{

}