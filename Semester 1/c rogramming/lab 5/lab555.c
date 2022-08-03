#include<stdio.h>
void main(){
int a=20;
int b=15;
sum(a,b);
sub(a,b);
mul(a,b);
div(a,b);
}
//summation
void sum(int x,int y){
int result =x+y;
printf("sum result :%d\n",result);
}

//subtraction
void sub(int x,int y){
int result =x-y;
printf("sub result :%d\n",result);
}

//multiplication
void mul(int x,int y){
int result =x*y;
printf("mul result :%d\n",result);
}

//division
void div(int x,int y){
int result =x/y;
printf("div result :%d\n",result);
}
