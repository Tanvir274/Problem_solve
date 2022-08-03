#include<stdio.h>
void main()
{
    int first=0,secend=1,third,i,n;
    printf("Enter  number:");
    scanf("%d",&n);
    for ( i = 0;i < n; i++)
    {
        if(i <= 1)
        {
            third=i;
        }
        else
        {
            third=first+secend;
            first=secend;
            secend=third;
        }
        printf("%d\n",third);
    }
}
