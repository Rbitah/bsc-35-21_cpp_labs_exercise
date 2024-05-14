#include <iostream>
#include "Person.h"
#include <string>

using namespace std;

int main()
{

    Person Jane("Jane", 60.0f, 17);
    Person John("John", 75.0f, 20);

    float totalWeight = Jane + John;

    cout << "Total weight: " << totalWeight << endl;

    if (Jane == John)
    {
        cout << "This is the same person" << endl;
    }

    if (Jane != John)
    {
        cout << "This is the NOT the same person" << endl;
    }

    if (Jane < John)
    {
        cout << "Jane is younger than John" << endl;
    }

    if (Jane > John)
    {
        cout << "John is older than Jane" << endl;
    }

    int johnAge = John;
    cout << "John`s Age: " << johnAge << endl;

    string janeFirstName = Jane;
    cout << "Jane`s FirstName: " << janeFirstName << endl;

    float janeWeight = Jane;
    cout << "Jane`s Weight: " << janeWeight << endl;

    return 0;
}