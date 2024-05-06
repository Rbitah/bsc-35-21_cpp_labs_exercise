#include "Rectangle.h"
#include <iostream>
using namespace std;
int main() {
    
    Rectangle myRectangle;

    
   cout << "Enter the length of the rectangle: ";
    float length;
   cin >> length;
   cout << "Enter the width of the rectangle: ";
    float width;
   cin >> width;

    // Set the length and width of the rectangle
    myRectangle.setLength(length);
    myRectangle.setWidth(width);

    // Calculate and print the area of the rectangle
   cout << "The area of the rectangle is: " << myRectangle.calculateArea() <<endl;

    return 0;
}
