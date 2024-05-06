#include <iostream>
#include <limits> // Fo numeric_limits

using namespace std;
int main() {
    int InputNUm;

    while (true) {
     cout << "Enter an integer value between 5 and 10: ";
        
        
        if (!(cin >> InputNUm)) {
           
         cout << "Invalid input. Please enter a valid integer." << endl;
           cin.clear(); // Clear error flags
                 cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
        } else if (InputNUm < 5 || InputNUm > 10) {
           
         cout << "Sorry, you have entered an invalid number. Please try again." << endl;
        } else {
            
         cout << "Your input value (" << InputNUm << ") has been accepted." << endl;
            break;
               }
    }

    return 0;
}