/*author:charles mureithi
ADM NO:BSE-01-0050/2025
description: a class to get the empolyees data ans output it throught its method
*/
#include<iostream> 
#include<string> 
using namespace std;
class Employee{
	public:
		int id_no;
		string employee_name;
		char occupation[20];
		void E_data(){
			cout<<id_no<<endl<<employee_name<<endl<<occupation;
		}
};
 int main(){
	 Employee zu_emp;
	 cout<<"enter employee id no:"<<endl;
	 cin>>zu_emp.id_no;
	 cout<<"enter employee name:"<<endl;
	 cin>>zu_emp.employee_name;
	 cout<<"enter occupation:"<<endl;
	 cin>>zu_emp.occupation;
	 zu_emp.E_data();
	 return 0;
 }