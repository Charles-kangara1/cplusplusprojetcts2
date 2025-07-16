/* Description:a code that uses the same area function and i=the derived 
              classes override it each time it calls it
              Name:Charles Mureithi
              Adm No:BSE-01-0050/2025

*/


#include<iostream>
#include <string.h>
#include<math.h>
#define  PI 3.1423
using namespace std;
/*the base class that contains the virtual funtions that is goin to be used 
in the derived clases */
 class Shape
 {
 	void virtual Area()
 	{
	 	cout<<"Area calculations not defined for generic shape ";
	 }
 };
 /*a derived class that inherits the fuctions from the base class and 
 overwrites it*/
 class Rectangle: public Shape
 {
 	private:
      int length;
      int width;
    public:
    	Rectangle(int le,int wi)
    	{
			length=le;
			width=wi;
		}
  void Area()
  {
  	cout<< length*width;
  }
  
 };
 /*a derived class that inherits the fuctions from the base class and 
 overwrites it*/
 class Circle: public Shape
 {
 	private:
 		float radius;
 	public:
 		Circle(float r)
 		{
		 	radius=r;
		 }
	 	void Area()
		 {
		 	cout<<  PI*pow(radius,2);
		 }	
 };
 // 
 class PolymorphismTest
 {
 	
 };
 int main()
 {
 	//a string for the shape wanted 
 	string sape;
 	// variables that takes in the values for the shape
 	float radi;
 	int l,w;
 	// a prompt that allows the user to enter the shape to get the Area 
 	cout<<"enter shape(circle or rectangle):"<<endl;
 	cin>>sape;
 	/* a control structure that checks the string inputed whether it is a 
	 cirlce and if it is an object is created and the a prompt too for
	  entering the values required for the shape and also the respective 
	  function to get the area and display it */
 	if(sape=="circle")
	 {
	 cout<<"enter radius:";
	 cin>>radi;
	 Circle C1(radi);
cout<<"AREA:"<<endl;
	C1.Area();	
	 }
	 else if(sape=="rectangle")
	 {
	 	cout<<"enter lenght:";
	 	cin>>l;
	 	cout<<"enter width:";
	 	cin>>w;
	 	Rectangle R1(l,w);
	 cout<<"AREA:"<<endl;
	R1.Area();
	 }
	 else 
	 {
	 	cout<<"Warning!!!!Cant get the Area of the shape.";
	 }
	 return 0;
	 
 }
 
 