/*Description: 1Dimensional Array  to Add the eements in the array together
ADM NO: BSE-01-0050/2025
NAME:Charles Mureithi*/
#include<iostream>

 using namespace std ;
 
 int main()
 {
 	int i,result ;
 	result =0;
 	int Arr[10]={0,1,2,3,4,5,6,7,8,9};
 	for (i=0;i<10;i++)
	 {
	    result+=Arr[i];	
	 }
	 cout<<result;
	 return 0;
 }
 