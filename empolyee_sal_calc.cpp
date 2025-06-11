/*a program to get the net pay after taxes of aan hourly wage employee
author:charles mureithi
adm no:BSE-01-0050/2025
*/
#include<iostream>
#include<cmath>
using namespace std;
float calcGP(float hw,float wage)/* a function to calculate the gross pay
hw=hours worked,wage=hourly wage,toatal hw=total hours worked*/
{
	if(hw>40){
		float totalhw=hw+0.5;
		return totalhw*wage;
	}
	else {
		
		return hw*wage;
	}
}
float calctax(float gp)// a function to calculate the taxes. gp =gross pay
{
	if (gp>600){
		return 0.2*gp;
	}
	else {
		return 0.15*gp;
	}
}
float calcNP(float a, float b)/*a function to calculate the netpay. 
a =grosspay, b=taxes*/
{
	return a-b;
}
int main()
{
	float hours_worked,hourly_wage,Grosspay,taxes,Netpay;
	cout<<"enter hours worked:"<<endl;
	cin>>hours_worked;
	cout<<"enter hourly wage:"<<endl;
	cin>>hourly_wage;
	Grosspay=calcGP(hours_worked,hourly_wage);
	taxes=calctax(Grosspay);
	Netpay=calcNP(Grosspay,taxes);
	cout<<"the grosspay="<<Grosspay<<endl;
	cout<<"the taxes on the grosspay="<<taxes<<endl;
	cout<<"the netpay after the taxes ="<<Netpay<<endl;
	return 0;
}