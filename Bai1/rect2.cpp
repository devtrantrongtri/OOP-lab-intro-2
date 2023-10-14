#include "rect2.h"

using namespace std;
int Rectangle::thisMany = 0;
Rectangle::Rectangle()
{
    this->wid = 10;
    this->fillString = nullptr;
    this->len = 10;
    this->thisMany ++;
}

Rectangle::Rectangle(int len, int wid , const char *string)
{   //this->fillString = const_cast<char*>(string) ; 
    this->fillString = string;
        if(len <= 20 && len >= 0 && wid >=0 && wid <= 20 ) 
        {
            this->len = len;
            this->wid = wid;
        }
        else {
            cout<<"Invalid length or width. Using default values (10x10)"<<endl;
            this->wid = 10;
            this->len = 10;
        }
        this->thisMany ++;
}

void Rectangle::setLength(int len)
{
    if(len <= 20 && len >= 0 ){
        this->len = len;
    }else{
        cerr<<"Invalid length.Using default value.(10)"<<endl;
        this->len = 10;
    }
}

void Rectangle::setWidth(int wid)
{
    if(wid <= 20 && wid >= 0 ){
        this->wid = wid;
    }else{
        cerr<<"Invalid width.Using default value.(10)"<<endl;
        this->wid = 10;
    }
}

int Rectangle::getLength() const
{
    return this->len;
}

int Rectangle::getWidth() const
{
    return this->wid;
}

double Rectangle::perimeter() const
{
    return 2*(this->len+this->wid);
}

double Rectangle::area()
{
    return len*wid;
}

double Rectangle::diagonal()
{
    return sqrt(len*len + wid*wid);
}

bool Rectangle::isSquare()
{
    return len == wid;
}

void Rectangle::draw(char fillCharacter)
{
    for (int i = 0; i < wid; i++) {
        for (int j = 0; j < len; j++) {
            std::cout << fillCharacter;
        }
        std::cout << std::endl;
    }
}

void Rectangle::display() const
{
    cout << "[" << len << "x" << wid << "]";
}
string Rectangle::fill() const
{
    return fillString;
}
int Rectangle::howMany()
{
    return thisMany;
}

Rectangle::~Rectangle()
{
    this->thisMany --;
}


