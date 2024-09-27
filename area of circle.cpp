//in thins program we will calulate the area of circle
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

//constant value of PI 
const double pi = 3.14;

//structure declearation 
struct circle
{
	double radius;
	double diameter;
	double area;
};

//main compartment of program 
int main()
{
	circle c;
	
	cout<<"Enter the diameter of the circle: "<<endl;
	cin>> c.diameter;
	
	c.radius = ( c.diameter / 2 );
	
	c.area =  pi * pow( c.radius, 2 );
	
	cout<< "The radius and srea of circle are: \n" <<endl;
	cout<< "Radius: \n "<< c.radius <<endl;
	cout<< "Area: \n "<< c.area <<endl;
	
	return 0;
}




