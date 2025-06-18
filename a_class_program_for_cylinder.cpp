#include <iostream> 
#include<cmath>
#define PI 3.14237
using namespace std;
class cylinder/* a class that has the access specifier as public hence the 
class members are able to be accesed outside the class and the class has two 
fuction*/  
{
	public:
		double radius,height;
	double calcVol()//a funtion/ method to calculate the volume of the cylinder
	{
			return PI*(pow(radius,2))*height;
		}
		double calcSA()/* a function to calculate the Surface area of the 
		cylinder*/ 
		{
			return 2*PI*(pow(radius,2))+2*PI*radius*height;
		}
		
};
int main()
{
	cylinder C1;/* C1 is the name of the class that is going to store themembers
	and the funtions passed in the class*/
	double volume,surface_area; /* the variables that are going to store the 
	functions result after the execution of the functions*/
	cout<<"enter the radius:"<<endl;
	cin>>C1.radius;
	cout<<"enter the height:"<<endl;
	cin>>C1.height;
	/* these will enbable us to input the values of the members in the class for
	 the first object*/
	volume=C1.calcVol();
	surface_area=C1.calcSA();
	cout<<"volume="<<volume<<endl;
	cout<<"surface area ="<<surface_area<<endl;
	return 0;
}