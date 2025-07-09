/*description: A multple class code that inherits code from another class 
AdmNo:BSE-01-0050/2025
Name:Charles Mureithi*/ 
#include<iostream> 
#include<string> 
#include<cmath>
using namespace std;
//we start with the base class for the account holder name 
//BASE CLASS
class AccountHolder{
	//encapuslated data member 
private:
	string Name;
	
	
	public:
	
// constructor 	to enable access of the data member outside the class  
	AccountHolder(string N){
		Name=N;
	}
	//the getter function to get the variable when called 
	string getName(){
		return Name;
	}
	
}; 

 //DERIVED CLASS1
 
 class BankAccount: public AccountHolder {
 	//encapulated data types 
private:
		int AccountNumber;
		double Balance;
	public:
		/* a constructor and an inherited constructor than enables the user 
		to enter the data types outside the class*/
		
 BankAccount(string n,int An, double Bal):AccountHolder(n){
	 Balance=Bal;
	 AccountNumber=An;
 }
//the getter function to get the variable when called 
int getAccountNumber(){
				
				return AccountNumber ;
			}
//the getter function to get the variable when called 
double getBalance(){
				return Balance;
			}
};

//DERIVED CLASS2
class SavingAccount : public BankAccount{
private:
	double interestRate;
public:
	/* two construcors inherited from the bas class and another derived class 
	than enables the user to enter the data types outside the class of th other
	 inherited class too*/
 SavingAccount(string nam,int a,double b,double Sa):BankAccount(nam,a,b){
	interestRate=Sa;
}
//the getter function to get the variable when called 
double getInterestRate (){

	return interestRate;
}
};

int main(){
	//variables to prompt the user to enter the details
	string Names;
	int AccountNo;
	double BalancenB,interest;
	//prompts the user to enter
	cout<<"Enter Name:"<<endl;
	//reads the data from the keyboard
	cin>>Names;
	cout<<"Enter AccountNO:"<<endl;
	cin>>AccountNo;
	cout<<"Enter Balance"<<endl;
	cin>>BalancenB;
	cout<<"Enter Interest Rate:"<<endl;
	cin>>interest;
	 
	// defining an object and initilizing the construcotor with values 
	SavingAccount P1(Names,AccountNo,BalancenB,interest);
cout<<"account name:"<< P1.getName()<<endl<<"accountNo:"<<P1.getAccountNumber();
	cout<<endl<<"balance:"<<P1.getBalance();
	 cout<<endl<<"interest:"<<P1.getInterestRate();
	return 0;
}