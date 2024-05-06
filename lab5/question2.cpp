#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Seed the random number generator with current time
    srand(static_cast<unsigned int>(time(0)));

    // Generate a random number between 0 and 11
    int daysB4Expiration = rand() % 12; // Generates a number from 0 to 11

    // Output appropriate message based on the value of daysUntilExpiration using switch statement
    switch (daysB4Expiration) {
        case 0:
            cout << "Your subscription has expired." << endl;
            break;
        case 1:
            cout << "Your subscription expires within a day!" << endl;
            cout << "Renew now and save 20%!" << endl;
            break;
        case 2:
        case 3:
        case 4:
        case 5:
            cout << "Your subscription expires in " << daysB4Expiration << " days." << endl;
            cout << "Renew now and save 10%!" << endl;
            break;
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
            cout << "Your subscription will expire soon. Renew now!" << endl;
            break;
        default:
            cout << "You have an active subscription." << endl;
            break;
    }

    return 0;
}
