#include <iostream>
using namespace std;

int main()
{
 float area, radius, height, volume, pie=3.141592;
 

 cout<<"input radius: ";
 cin>>radius; 
 cout<<"input height: ";
 cin>>height;

area= 2*pie*radius*height+2*pie*radius*radius;
 volume=pie*radius*radius*height;
 cout<<"The area of the cylinder is: "<<area;
 cout<<"\n";
 cout<<"the volume of the cylinder is: "<<volume;
    
    
	
}
   
