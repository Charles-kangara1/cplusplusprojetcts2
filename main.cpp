/*author:Charles Mureithi
  ADM NO:BSE-01-0050/2025
  DESCRIPTION: A code to get the bonus and the net salary after the bonus*/
#include <iostream>

using namespace std;

int main()
{ float salary,years_of_experience,bonus,new_salary;
cout<<"enter the salary and the years of exprience of the employee:"<<endl;
cin>>salary>>years_of_experience;
if(years_of_experience<6){
    bonus=0.06*salary;
    new_salary=salary+bonus;
}
else if(years_of_experience>=6&&years_of_experience<=10){
    bonus=0.08*salary;
    new_salary=salary+bonus;
}
else if(years_of_experience>10){
    bonus=0.1*salary;
    new_salary=salary+bonus;
}
else{
    cout<<"salary not applicable for bonus";
}
cout<<"the bonus of employee is:"<<bonus<<endl;
cout<<"the new salary of the employee is:"<<new_salary;
return 0;

}
