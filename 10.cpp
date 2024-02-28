//WAP to swap two variables.
#include<iostream>
using namespace std;
int main()
{
   int num1=10,num2=20;
   cout<<"bifore swapping";
   cout<<"num1="<<endl;
    num1=num1+num2;//30
    num2=num1-num2;//10
    num1=num1-num2;//20
    cout<<"after swapping=";
    cout<<num1<<endl;
    cout<<num2<<endl;
}