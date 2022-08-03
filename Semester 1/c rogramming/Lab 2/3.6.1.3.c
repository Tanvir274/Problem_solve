#include<stdio.h>
void main()
{
    int  x=5,y=10,t;
    printf("Before swap, x=%d,y=%d\n",x,y);
    t=x;
    x=y;
    y=t;
    printf("After swap, x=%d,y=%d\n",x,y);
}
