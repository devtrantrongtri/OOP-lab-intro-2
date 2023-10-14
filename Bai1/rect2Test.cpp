#include <iostream>
#include <cstdlib>
using namespace std;
#include "rect2.h"


int main(void)
{
    cout << "Starting # of Rectangles: " << Rectangle::howMany()<< endl << endl;
    Rectangle a;
        cout << "Rectangle A = ";
        a.display();
        cout << endl << "Now this many Rectangles: " << a.howMany();
        cout << endl << endl;

    Rectangle b(12, 20, "Rectangle B");
        cout << "Rectangle B = ";
        b.display();
        cout << endl << "Now this many Rectangles: " << b.howMany();
        cout << endl << endl;

    { // block to test destructor
        const Rectangle c(-5, 15, "Rectangle C");
        cout << "Rectangle C = ";
        c.display();
        cout << endl << "Now this many Rectangles: " << c.howMany();
        
        // testing const functions and new fill function
        cout << endl << "Perimeter of Rectangle C is: " << c.perimeter();
        cout << endl << "Fill string of Rectangle C is: " << c.fill();
        cout << endl << endl;
    }
        // should be one less now, since block exited
        cout << "After exiting block, this many Rectangles: "<< Rectangle::howMany() << endl << endl;
 
        return 0;
}

