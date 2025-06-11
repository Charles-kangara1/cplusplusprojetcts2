/* a program to calculate simple interst of by accepting the princiole amount
time and rate */
#include<iostream>
#include<cmath> 
using namespace std;
float calcSI(float a, float b, float c){
	return (a*b*c)/100;
}
int main(){
	float rate,principle_amount,time,simple_interest;
	cout<<"enter principle amount:"<<endl;
	cin>>principle_amount;
	cout<<"enter time:"<<endl;
	cin>>time;
	cout<<"enter the rate:"<<endl;
	cin>>rate;
	simple_interest=calcSI(principle_amount,time,rate);
	cout<<"the simple interest="<<simple_interest;
	return 0;
	
}