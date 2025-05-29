#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    float weight,height,BMI;
    cout<<"enter your weight and height"<<endl;
    cin>>weight>>height;
    BMI=weight/pow(height,2);
    if(BMI<18.5){
       cout<<"BMI:"<<BMI<<endl;
        cout<<"underweight";
       }

    else if(BMI>=18.5&&BMI<25){
       cout<<"BMI:"<<BMI<<endl;
       cout<<"normal weight";}

    else if(BMI>=25&&BMI<30){
       cout<<"BMI:"<<BMI<<endl;
        cout<<"overweight";}

    else{
       cout<<"BMI:"<<BMI<<endl;
        cout<<"obesity";}
        return 0;
}
