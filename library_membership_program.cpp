/* descrption: c++ code fo a library in an instituition
    name:charles mureithi
    adm no:BSE-01-0050/2025*/
    #include<iostream>
    #include<string.h>
    using namespace std;
    //base class
    class Person
	{// access specifier for the data member only 
		protected:
			string name;
			public:
				// a constructor for the base class
  Person(string N){
  	//deriving the N string created in the constructor 
	name=N;
                  }
//getter for the name meber in the main function
string getName(){
	return name;
                }
                
	};
	
//derived class from the person class
	class LibraryMember:public Person
	{// access specifier to enable security in the data members
	private:
		int member_iD;
		int Books_Borrowed;
    /*a access specifier public so that the contents after can be accessed in 
	main function*/
	public:
	/*a constructor calling to another construcot so that the data input in the
	 other construcor can also be able to be input here without the need to 
	 declare the data member here too and the getter function since it also 
	 inherits from the the base construtor*/
		LibraryMember(string na,int id,int BooksB):Person(na){
			member_iD=id;
			Books_Borrowed=BooksB;
		} 
		
// getter function for member ID
      int getMemberID(){
		  return member_iD;
	  }
	  int getBooksBorrowed(){
	  	return Books_Borrowed;
	  }	
		
	};
	/*the second dervided class that obtains from a derived class making the 
	derived class obtained from a base class*/
	class PremiumMember:public LibraryMember
	{//access specifier for the data member 
		private:
			double MembershipFee;
			//a constructor calling on to another constructor
       public:
PremiumMember(string Name,int MId,int BB,double fee):LibraryMember(Name,MId,BB)
{
	MembershipFee=fee;
}
//getter
double getmembershipFee(){
    return 	MembershipFee; 
}
		
	};
	//main function
	int main(){
		/*varibles so as to prompt the user to enter the value themselves and 
		be able to display*/
	string name;
	double fees;
	int	id,borrowed;
	cout<<"Enter member Name:"<<endl;
	cin>>name;
	cout<<"Enter member ID:"<<endl;
	cin>>id;
	cout<<"Enter books borrowed:"<<endl;
	cin>>borrowed;
	cout<<"Enter membership Fee:"<<endl;
	cin>>fees;
	/*creating an object by creating a variable using the class name as 
	the data member*/
	
	PremiumMember member1(name,id,borrowed,fees);
	
	
	//displaying the input given 
	cout<<"MemberId:"<<member1.getMemberID()<<endl;
	cout<<"Member Name:"<<member1.getName()<<endl<<"Membership FEE:";
	cout<<member1.getmembershipFee()<<endl <<"Books Borrowed:";
	cout<<member1. getBooksBorrowed()<<endl;
	return 0;
	}