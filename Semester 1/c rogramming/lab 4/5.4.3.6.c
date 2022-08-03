#include<stdio.h>
void main()
{
    int num, count =0,i;
    printf("Any positive number:");
    scanf("%d",&num);
    for(i=2;i<num;i++)
    {
        if(num%i==0)
        {
            count++;
            break;
        }

    }
    if(count==0)
        printf("prime number");
    else
        printf("not a prime number");
}
