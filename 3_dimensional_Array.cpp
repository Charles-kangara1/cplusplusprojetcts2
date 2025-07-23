/*Desprition: a 3 Dimensional array that dsplays values in each array and 
              labels their positios
ADM NO: BSE-01-0050/2025
NAME:Charles Mureithi
*/
#include<iostream> 

using namespace std ;
int main()
{   //variables that help in the for loop
	int i,j,k;
	// the 3dimesional array
	int Arr[2][2][3]=
	{ //1:
	{
	   {1,2,3}	,{45,67,89}
	},
	//2:
	{
	    {34,56,21},{4,5,6}
	}
	};
//for loop to display the array
for (i=0;i<2;i++)
{
	for (j=0;j<2;j++)
	{
		for (k=0;k<3;k++)
		{
			cout<<"Arr["<<i<<"]["<<j<<"]["<<k<<"]="<<Arr[i][j][k]<<endl;
		}
	}
}
return 0;
} 