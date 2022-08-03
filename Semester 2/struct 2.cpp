#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;
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

int main()
{
	data d[20];
	data *P = d;
   //creates array of type data with limit 20
	int i=0 ;
	char ch;
do {
		cout << "Please enter Name of the employee :"<< endl;
		cin >> P[i]-> name;

		cout << "Please enter age" << endl;
		cin >> > P[i] -> age ;
        cout << "Please enter date (dd,mm,yyyy)" << endl;
		cin >> > P[i] -> hireDate.dd;
		cin >> > P[i] -> hireDate.mm;
		cin >> > P[i] -> hireDate.yy;
		cout << "Would like to enter more data? (y/n)" << endl;
		i++;
		cin >> ch;

	}
	while (ch != 'n');
	for (int j=0; j < i; j++)
	{
		cout << endl << > P[i] -> name;
	}
}

