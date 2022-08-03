#include<stdio.h>
void main()
{
    int m,n,f;
    printf("Enter the number:");
    scanf("%d",&n);
    for(m=n;m<=n;m--)
    {
        f=m*(m-1);
        printf("Factorial of%d is:%d",n,f);

    }
    if(m<=1)
    {
        return 1;
    }
}
