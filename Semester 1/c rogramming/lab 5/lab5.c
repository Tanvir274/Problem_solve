#include<stdio.h>

void main (){

int x =10;

int *p;

p=&x;

printf("x=%d \n",x);

printf("address of x=%u\n",p);

printf("Address of pointer p=%u \n",&p);

printf("Value pointed by p=%u\n",*p);


}
