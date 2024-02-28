//WAP to take persantage and print the passing divition of student.
#include<iostream>
using namespace std;
int main()
{
   int hindi,english,shoshialscince,math,sanckrit,since,total,result=0;
   cout<<" enter marks of hindi";
   cin>>hindi;
   cout<<" enter marks of english";
   cin>>english;
   cout<<" enter marks of shoshialscince";
   cin>>shoshialscince;
   cout<<" enter marks of math";
   cin>>math;
    cout<<" enter marks of since";
   cin>>since;
    cout<<" enter marks of sanckrit";
   cin>>sanckrit;
   total=hindi+english+shoshialscince+math+sanckrit+since;
   result=100*total/600;
   cout<<"the percantage is: ";
   cout<<result<<endl;
   
  
   if(result>=60 && result<=100)
   {
       cout<<"firstDivison";
   }
   else if(result>=45 && result<60)
   {
       cout<<"secondDivison";
   }else if(result>36)
   {
       cout<<"Fall";
   }
 
}