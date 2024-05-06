#include <iostream>
#include <cstdlib> // For rand() and srand() functions
#include <ctime>   // For time() function

using namespace std;

int main() {
    
    srand(static_cast<unsigned int>(time(0)));

   
    int daysB4Expiration = rand() % 12; // Generates a number from 0 to 11
                                        //daysB4Expiration=daysUntilExpirationdays
    
    if (daysB4Expiration == 0) {
        cout << "Your subscription has expired."<< endl;
    } else if (daysB4Expiration <= 1) {
        cout << "Your subscription expires within a day!" << endl;
        cout << "Renew now and save 20%!" << endl;
    } else if (daysB4Expiration <= 5) {
        cout << "Your subscription expires in " << daysB4Expiration << " days." << endl;
        cout << "Renew now and save 10%!" << endl;
    } else if (daysB4Expiration <= 10) {
        cout << "Your subscription will expire soon. Renew now!" << endl;
    } else {
        cout << "You have an active subscription." << endl;
    }

    return 0;
}
