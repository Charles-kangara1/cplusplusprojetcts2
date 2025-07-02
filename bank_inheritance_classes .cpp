/*description: A multple class code that inherits code from another class 
AdmNo:BSE-01-0050/2025
Name:Charles Mureithi*/ 
#include<iostream> 
#include<string> 
using namespace std;
//we start with the base class for the account holder name 
class AccountHolder{
	/* the access for this data member is protected meaning it can only be a
	accessed by ingerited classes*/
	protected:
	string Name;
	
	/*a public member function so that it can be accesed even within the main 
	function*/
	public:
	/* a void function since we dont need any return value but setting the 'N'
	 as the name data member in the class */
	 
	 void SetName(string N){
		Name=N;
	}
	string getName(){
		return Name;
	}
	
}; 

 class BankAccount: public AccountHolder {
	private:
		int AccountNumber;
		double Balance;
	public:
 void SetAccountNo(int AN){
		AccountNumber=AN;
	}
			int getAccountNumber(){
				int AN=AccountNumber;
				
				return AN ;
			}
void Setbalance(double Bal){
		Balance=Bal;
	}
double getBalance(){
				double Bal=Balance;
				return Bal;
			}
};
class SavingAccount : public BankAccount{
private:
	double interestRate;
public:
 SavingAccount(double Sa){
	interestRate=Sa;
}
double getInterestRate (){
	double Sa=interestRate;
	return Sa;
}
};

int main(){
	SavingAccount P1(109.09);
	P1.SetAccountNo(14501);
	P1.Setbalance(309887.56);
	P1.SetName("charles Mureithi");
	string NM;
	int accountNo;
	double balance,interest;
	accountNo=P1.getAccountNumber();
	balance=P1.getBalance();
	interest=P1.getInterestRate();
  NM=P1.getName();
	cout<<"account name:"<< NM<<endl<<"accountNo:"<<accountNo<<endl<<"balance:"<<balance;
	 cout<<endl<<interest;
	return 0;
}