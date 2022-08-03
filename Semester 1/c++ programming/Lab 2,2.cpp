
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
    id = 0 ;
    name = "" ;
    salary = 0 ;
}
employee (int i , string n , double s ){
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

void set_salary(double s){
salary = s ;
}
int get_id()
{
    return id;
}

double get_salary()
{
return salary ;
}

string get_name()
{
    return name ;
}
 };

 int main ()
 {
     employee s1 ;
     employee s2(181298 , "KARIM RAHMAN" , 10000);

     employee employee_list[10] ;
     employee list[5];


     s1.set_id(181288);
     s1.set_name("RAHIM RAHMAN");
     s1.set_salary(9000) ;


   cout<<s1.get_id()<<endl;
   cout<<s1.get_salary()<< endl ;
   cout<<s1.get_name()<<endl<<endl ;

cout<<s2.get_id()<<endl;
   cout<<s2.get_salary()<< endl ;
   cout<<s2.get_name()<<endl ;
     return 0;
 }
