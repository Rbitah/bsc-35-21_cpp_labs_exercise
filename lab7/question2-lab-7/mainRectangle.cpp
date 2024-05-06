#include "Rectangle.h"
#include <iostream>
using namespace std;

int main() {
    Rectangle firstRectangle;
    cout << "Enter the length of the first rectangle: ";
    float firstLength;
    cin >> firstLength;
    cout << "Enter the width of the first rectangle: ";
    float firstWidth;
    cin >> firstWidth;
    firstRectangle.setLength(firstLength);
    firstRectangle.setWidth(firstWidth);
    cout << "The area of the first rectangle is: " << firstRectangle.calculateArea() << endl;

    
    cout << "Enter the length of the second rectangle: ";
    float secondLength;
    cin >> secondLength;
    cout << "Enter the width of the second rectangle: ";
    float secondWidth;
    cin >> secondWidth;
    Rectangle secondRectangle(secondLength, secondWidth);
    cout << "The area of the second rectangle is: " << secondRectangle.calculateArea() << endl;

    return 0;
}
