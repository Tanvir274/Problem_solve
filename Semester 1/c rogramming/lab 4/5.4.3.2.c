#include<stdio.h>
void main()
{
    int n,f;
    printf("Enter the number :");
    scanf("%d",&n);
    f=fac(n);
    printf("Factorial of %d is:%d",n,f);
}
int fac(int m)
{
    if(m<=1)
        return 1;
    return m*fac(m-1);
}
