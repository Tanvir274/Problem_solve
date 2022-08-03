#include <iostream>
#include <conio.h>
#include <stdio.h>
using  namespace std;
struct Date{
		int mm;
		int dd;
		int yy;
};
struct data{
	char name[25];
	int age;
	struct Date hireDate;
};

int main(void)
{
	data d[20];
   //creates array of type data with limit 20
	int i = 0;
	char ch;


do {
		cout<< "Please enter Name of the employee :"<<endl;
		cin >> d[i].name ;

		cout << "Please enter age :" << endl;
		cin >> d[i].age ;
        cout << "Please enter date (dd,mm,yyyy)" << endl;
		cin >> d[i].hireDate.dd;
		cin >> d[i].hireDate.mm;
		cin >> d[i].hireDate.yy;
		cout << "Would like to enter more data? (y/n)" << endl;
		i++;
		cin >> ch;
		cout<<endl<<endl;

	}
	while (ch != 'n');
	for (int j=0; j < i; j++)
	{
		cout << endl << d[j].name;
	}
}
