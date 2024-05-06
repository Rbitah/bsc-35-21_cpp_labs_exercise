#include <iostream>
#include <limits> // For numeric_limits

using namespace std;

// Function prototypes
void  displayMenu();
void  SquareArea();
void  RectangleArea();
void  TriangleArea();

int main() {
    int choice;

    do {
        displayMenu();
        cout << "Enter selection : ";
        
        if (!(cin >> choice)) {
            // Handle non-integer input
            cout << "Invalid input. Please enter a valid option." << endl;
            cin.clear(); // Clear error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
            continue;
        }

        switch (choice) {
            case 1:
                    SquareArea();
                break;
            case 2:
                    RectangleArea();
                break;
            case 3:
                    TriangleArea();
                break;
            case 4:
                cout << "EXITED" << endl;
                break;
            default:
                cout << "Your input was: " << choice << " which is an invalid input. Please enter a valid option!!!" << endl;
                break;
        }

        
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

    } while (choice != 4);

    return 0;
}


void displayMenu() {
    cout << "Please select the shape to calculate the area:" << endl;
    cout << "1. Square" << endl;
    cout << "2. Rectangle" << endl;
    cout << "3. Triangle" << endl;
    cout << "4. Quit" << endl;
}


void SquareArea() {
    double side;
    cout << "Enter the side length of the square: ";
    cin >> side;

    if (side <= 0) {
        cout << "Invalid side length. Please enter a positive value." << endl;
    } else {
        double area = side * side;
        cout << "Area of the square: " << area << endl;
    }
}


void RectangleArea() {
    double length, width;
    cout << "Enter the L of the rectangle: ";
    cin >> length;
    cout << "Enter the W of the rectangle: ";
    cin >> width;

    if (length <= 0 || width <= 0) {
        cout << "Invalid dimensions. Please enter positive values." << endl;
    } else {
        double area = length * width;
        cout << "Area of the rectangle: " << area << endl;
    }
}

// Function to calculate the area of a triangle
void TriangleArea() {
    double base, height;
    cout << "Enter the B length of the triangle: ";
    cin >> base;
    cout << "Enter the H of the triangle: ";
    cin >> height;

    if (base <= 0 || height <= 0) {
        cout << "Invalid dimensions. Please enter positive values." << endl;
    } else {
        double area = 0.5 * base * height;
        cout << "Area of the triangle: " << area << endl;
    }
}
