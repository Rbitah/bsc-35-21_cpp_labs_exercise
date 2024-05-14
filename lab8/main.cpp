#include<iostream>
#include  "Box.h"

using namespace std;

int main()
{
   Box Box1;                             
   Box Box2;                           
   Box Box3;                           
   double volume = 0.0;               

                                     
    Box1.SetLength(6.0);
    Box1.SetBreadth(7.0);
    Box1.SetHeight(5.0);
                                   
    Box2.SetLength(12.0);
    Box2.SetBreadth(13.0);
    Box2.SetHeight(10.0);

                               
    volume =  Box1.GetVolume();
    cout << "Volume of the Box1: "<<volume << endl;

                                                          
    volume = Box2.GetVolume();
    cout << "Volume of Box2: " <<volume  << endl;

                                 
    Box3 = Box1 + Box2;

                                
    volume =  Box3.GetVolume();
    cout << "Volume of Box3: " <<volume << endl;

    return 0;


}