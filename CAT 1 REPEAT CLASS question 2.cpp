#include<iostream>
using namespace std;

int main()
{
	float celsius, fahrenheit;
	
	cout<<"Enter Degree in Fahrenheit To be Converted into Celsius: \n";
	cin>>fahrenheit;
	celsius=5* (fahrenheit-32)/9 ;
	
	cout<<"Degree Converted to Celsius is:"<< celsius;
	
	return 0;
}
