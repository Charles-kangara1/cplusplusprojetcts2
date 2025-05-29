
/*author:Charles Mureithi
  ADM NO:BSE-01-0050/2025
  DESCRIPTION:a a grading system that gets the sum of marks ,average and grades the average*/

#include <iostream>

using namespace std;

int main()
{
    float mark1,mark2,mark3,sum_of_marks,average_of_marks;
    cout<<"enter three marks of your choice:"<<endl;
    cin>>mark1>>mark2>>mark3;
    sum_of_marks=mark1+mark2+mark3;
    average_of_marks=sum_of_marks/3;
    if(average_of_marks>=70&&average_of_marks<=100){
            cout<<"the average for the marks is:"<<average_of_marks<<endl;
        cout<<"grade:A";
    }
    else if(average_of_marks>=60&&average_of_marks<70){
            cout<<"the average for the marks is:"<<average_of_marks<<endl;
        cout<<"grade:B";
    }
     else if(average_of_marks>=50&&average_of_marks<60){
            cout<<"the average for the marks is:"<<average_of_marks<<endl;
        cout<<"grade:C";
    }
     else if(average_of_marks>=40&&average_of_marks<50){
            cout<<"the average for the marks is:"<<average_of_marks<<endl;
        cout<<"grade:D";
    }
     else if(average_of_marks>=0&&average_of_marks<40){
            cout<<"the average for the marks is:"<<average_of_marks<<endl;
        cout<<"grade:E(fail)";
    }
    else{
        cout<<"average not gradable";
    }

    return 0;
}
