/* a program to get the addition, sumation,division and the difference of 
two numbers*/
#include<iostream>
#include<cmath>
using namespace std;
float calcADD(float a,float b);
float calcDIV(float c,float d);
float calcLESS(float e, float f);
float calcPROD(float g, float h);
int main(){
	float num1,num2,sum,multiply,division,subtraction;
	cout<<"enter num1:"<<endl;
	cin>>num1;
	cout<<"enter num2:"<<endl;
	cin>>num2;
	sum=calcADD(num1,num2);
	cout<<"sum="<<sum<<endl;
	division=calcDIV(num1,num2);
	cout<<"division="<<division<<endl;
	multiply=calcPROD(num1,num2);
	cout<<"multipication="<<multiply<<endl;
	subtraction=calcLESS(num1,num2);
	cout<<"subtraction="<<subtraction<<endl;
	return 0;
}
float calcADD(float a,float b){
	return a+b;
}
float calcDIV(float c,float d){
	return c/d;
}
float calcLESS(float e, float f){
	return e-f;
}
float calcPROD(float g, float h){
	return g*h;
}


