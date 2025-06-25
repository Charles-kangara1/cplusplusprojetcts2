#include<iostream> 
#include<string>
using namespace std;
class Car{
	string brand;
	string model;
	float price;
	float mileage;
	public:
	Car(string B,string M,float P,float Mi){
		brand=B;
		model=M;
		price=P;
		mileage=Mi;
}
public:
	
	void displayDets(){
		cout<<"Brand = "<<brand<<endl;
		cout<<"Model = "<<model<<endl;
		cout<<"price = "<<price<<endl;
		cout<<"Mileage = "<<mileage<<endl;
}

  float drive(float b){
	return b+mileage;
}

};
int main(){
	Car Carobj1("toyota","corolla",20000,5000);
	Carobj1.displayDets();
	int newMileage1,newMileage2;
	newMileage1=Carobj1.drive(150);
	newMileage2=Carobj1.drive(300);
	cout<<"New Mileage ="<<newMileage1<<endl;
	cout<<"New Mileage ="<<newMileage2<<endl;
	return 0;
}