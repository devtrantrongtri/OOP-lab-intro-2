#ifndef RECT2_H
#define RECT2_H
#include <iostream>
#include <cstdlib>
#include <math.h>
#include <string>
class Rectangle
{
private: 
    int len;
    int wid;
    static int thisMany ;
    const char* fillString;
public:
    Rectangle();
    Rectangle(int , int  ,const char *) ;
    
    void setLength(int len);
    void setWidth(int wid);
    int getLength() const;
    int getWidth() const;
    double perimeter() const;
    double area();
    double diagonal();
    bool isSquare();
    void draw(char fillCharacter);
    void display() const;
    static int howMany();
    std::string fill() const ;
    ~Rectangle();


};

#endif