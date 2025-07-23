/*Description : An array that gets the sum of two diffrent array sets
ADM NO:BSE-01-0050/2025
NAME:Charles Mureithi*/
#include <iostream>

using namespace std;

int main()
{
  int Arr1[2][2]={{3,4},{7,8}},Arr2[2][2]={{1,1},{1,1}};
  int i,j;
  //the array that will hold the result 
  int sol[2][2];
  for(i=0;i<2;i++)
  {
  	for (j=0;j<2;j++)
	  {
	  	
	  	sol[i][j]=Arr1[i][j]+Arr2[i][j];
	  	/*the first elements in the first row of both the array will be 
		  added to each other and when inceremented the secong element
		   in the first row will be added together then when done it will 
		   increment to the second row and add both the first element and 
		   each will be stored in the respecitve postion in the sol array 
		   as the solution*/ 
		   
	  }
  }
  // the for loop to out put the solution 
  for (i=0;i<2;i++)
  {
  	for (j=0;j<2;j++)
	  {
	  	cout<<sol[i][j]<<"\t";
	  }
	  cout<<endl;
  }
  return 0;	
}