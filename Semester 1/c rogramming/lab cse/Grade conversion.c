#include<stdio.h>
void main()
{
    int a,b,c,d,res;
    printf("Your grade:\n");
    scanf("%d",&res);
    switch(res)
    {
    case 80-100:
        printf("your result is A+");
        break;
    case 70-79:
        printf ("your result is A");
        break;
    case 60-69:
        printf("your result is A-");
        break;
    case 50-59:
        printf("your result is B");
    }
}
