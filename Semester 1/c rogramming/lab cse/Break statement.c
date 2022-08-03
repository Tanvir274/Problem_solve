#include<stdio.h>
void main()
{
    int num,i;
    printf("Enter a number");
    scanf(" %d",&num);

    i=2;
    while(i<=num-1)
    {
        if(num%i==0)
        {
            printf("Not a prime number\n");
            break;
        }
        i++;
    }

}
