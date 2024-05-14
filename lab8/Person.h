#pragma once 

#include <string>

using namespace std;

class Person
{
private:
       float weight;
       string mFName;
       int age;
  
public:
      Person();
      Person(string newFName,float weight,int age); 

      ~Person();
                                    
      float operator + (const Person& otherPerson);
      bool operator == (const Person& otherPerson);
      bool operator != (const Person& otherperson);
      bool operator <  (const Person& otherPerson);
      bool operator >  (const Person& otherPerson);

      operator int();
      operator string();
      operator float();
};