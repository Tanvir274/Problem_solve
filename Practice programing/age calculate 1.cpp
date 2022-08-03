#include<iostream>
#include<conio.h>
 using namespace std;
  int main()
   {
      int y,m,d,td,pd,tm,pm,ty,py;
      cout<<"Enter Birth  Date, Month and Year:-";
      cin>>pd>>pm>>py;
      cout<<"Enter today Date, Month and Year:-";
      cin>>td>>tm>>ty;
      int mm[12]={31,28,31,30,31,30,31,31,30,31,30,31};
      if(pd>td)   //For Dates
       {
           td=td+mm[tm-1];
           d=td-pd;
           tm=tm-1;
       }
      else
         d=td-pd;
      if(pm>tm)   //For Months
        {
          tm=tm+12;
          ty=ty-1;
          m=tm-pm;
        }
       else
         m=tm-pm;
         y=ty-py;    //For Years

       cout<<"\nAge is "<<y<<" Years "<<m<<" Months and "<<d<<" Days.";
       getch();

       cout<<endl<<endl;

       return main();
  }
