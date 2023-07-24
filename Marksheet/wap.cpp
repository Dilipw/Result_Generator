// Write the cpp program to show the markmemo to show pass,F class, S class, T class and ATKT base

// Program for show the full markmemo with some spedified data

#include<iostream>
using namespace std;

int main()
{
    string name;
    int n=0;
    string seatNo;
    float Total=0, Percentage;
    int s[7];
    cout<<"Enter the Name :"<<endl;

    getline(cin,name);

    cout<<"Enter the Seat No :"<<endl;

    cin>>seatNo;

  cout<<"Enter the marks of S1 :"<<endl;

  cin>>s[0];

  cout<<"Enter the marks of S2 :"<<endl;

  cin>>s[1];

  cout<<"Enter the marks of S3 :"<<endl;

  cin>>s[2];

  cout<<"Enter the marks of S4 :"<<endl;

  cin>>s[3];

  cout<<"Enter the marks of S5 :"<<endl;

  cin>>s[4];

  cout<<"Enter the marks of S6 :"<<endl;

  cin>>s[5];

  cout<<"Enter the marks of S7 :"<<endl;

  cin>>s[6];

for(int i=0;i<7;i++)
  {
   
  if(s[i]<35)
  {
    n++;
  }
  }

// Calculate the total marks 

      for(int i=0;i<7;i++)
 {
    Total+=s[i];
 }

 // Calculate the percentage 

 Percentage=(Total/7);

// if value of n is samller than 3 then applicable for ATKT

   if(n==1 || n==2 || n==3)
  {
    cout<<"You are Eligible for ATKT :"<<endl;
    cout<<"Total is :"<< Total<<endl; 
  cout<<"Percentage is Not Required For ATKT Result :"<<endl;
  }
  // if value of n is greater than 3 then result is fail
   else if(n>3)
  {
    cout<<"You are Fail :"<<endl;
    cout<<"Total is :"<< Total<<endl; 
  cout<<"Percentage Not Applicable for Failed :"<<endl;
  }
  // if value of n is 0 then result in pass 
  else if(n==0)
  {
  if(Percentage>=60)
  {
    cout<<"Pass in First class :"<<endl;
  }else if (Percentage<60 && Percentage>=50)
  {
    cout<<"Pass in Second  class :"<<endl;
  }
  else if(Percentage<50 && Percentage>=30 ){
    cout<<"Pass in Third class :"<<endl;
  }
   cout<<"Total is :"<< Total<<endl; 
  cout<<"Percentage is :"<<Percentage<<endl;
  }
    return 0;
}