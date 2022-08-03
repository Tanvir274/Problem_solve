#include<stdio.h>
void main(){
int var=200;
int *ptr;
int **pptr;
ptr = &var ;
pptr = &ptr ;
/* take the value using pptr */
printf ("var = %d\n", var );
printf ("*ptr = %d\n", *ptr );
printf ("**pptr = %d\n", ** pptr );
}



