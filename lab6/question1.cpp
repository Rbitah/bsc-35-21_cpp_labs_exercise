#include <iostream>
#include <string>
using namespace std;

int main() {
    
    int* dynamicInt = new int;

    string* dynamicString = new string;

    cout << "Enter an integer value: ";
    cin >> *dynamicInt;

    cout << "Enter a string value: ";
    cin.ignore(); 
    getline(cin, *dynamicString);

    // Output the values
    cout << "Dynamically allocated integer value: " << *dynamicInt << endl;
    cout << "Dynamically allocated string value: " << *dynamicString << endl;

    // Clean up allocated memory
    delete dynamicInt;
    delete dynamicString;

    return 0;
}