#include "Person.h"

Person::Person()
{

}

Person::Person(string newFirstName,float newWeight,int newAge)
{
    mWeight = newWeight;
    mFirstName = newFirstName;
    mAge = newAge;
}

Person::~Person()
{

}

float  Person::operator + (const Person& otherPerson)
{
    return mWeight + otherPerson.mWeight;
}

bool Person::operator == (const Person& otherPerson)
{
    return mFirstName == otherPerson.mFirstName;
}

bool Person::operator != (const Person& otherPerson)
{
    return !(*this == otherPerson);
}

bool Person::operator < (const Person& otherPerson)
{
    return mFirstName < otherPerson.mFirstName;
}

bool Person::operator > (const Person& otherPerson)
{
    return mFirstName > otherPerson.mFirstName;
}

Person::operator int()
{
    return mAge;
}

Person::operator string()
{
    return mFirstName;
}


Person::operator float()
{
    return mWeight;
}