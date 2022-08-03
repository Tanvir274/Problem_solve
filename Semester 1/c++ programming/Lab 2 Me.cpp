
#include<iostream>
using namespace std ;
 class employee
 {

 private :
    int id ;
    string name ;
    double salary ;

 public :
employee ()
{
    id  ;
    name  ;
    salary ;
}
employee (int i , string n , double s )
{
id = i ;
name=n ;
salary= s ;
}
void set_id(int i)
{
    id=i ;

}
void set_name(string n)
{
name= n ;
}

void set_salary(double s)
{
salary = s ;
}
int get_id()
{
    cout<<"Id:";
    return id;
}

double get_salary()
{
    cout<<"Salary:";
return salary ;
}

string get_name()
{
    cout<<"Name:";
    return name ;
}
 };

 int main ()
 {

     employee s1 ;
     employee s2(1812 , "KARIM RAHMAN" , 10000);
     employee s3(1001 ,"HASAN ALI", 15000);
     employee s4(2001,"RAJON ALI",18000);
     employee s5(3001,"KOBIR ALI",20000);

    // employee employee_list[10] ;
    // employee list[5]={s1,s2,s3,s4,s5};


     s1.set_id(1813);
     s1.set_name("RAHIM RAHMAN");
     s1.set_salary(9000) ;

int id;
cout<<"ENTER THE ID:";
cin>>id;
switch(id)
{
   case 1813:
   cout<<s1.get_id()<<endl;
   cout<<s1.get_salary()<< endl ;
   cout<<s1.get_name()<<endl<<endl ;
   break;
   case 1812:
   cout<<s2.get_id()<<endl;
   cout<<s2.get_salary()<< endl ;
   cout<<s2.get_name()<<endl<<endl ;
   break;
   case 1001:
   cout<<s3.get_id()<<endl;
   cout<<s3.get_salary()<< endl ;
   cout<<s3.get_name()<<endl<<endl ;
   break;
   case 2001:
   cout<<s4.get_id()<<endl;
   cout<<s4.get_salary()<< endl ;
   cout<<s4.get_name()<<endl<<endl ;
   break;
   case 3001:
    cout<<s5.get_id()<<endl;
   cout<<s5.get_salary()<< endl ;
   cout<<s5.get_name()<<endl<<endl ;
   break;
   default:
   cout<<"No match Id"<<endl<<endl;


}
     return main();
 }
