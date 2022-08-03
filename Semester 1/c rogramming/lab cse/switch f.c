#include<stdio.h>
int main()
{
    int number;

    scanf("%d",&number);

    switch(number)
    {
    case 10:
        printf("Number is 10\n");
        break;
    case 9:
        printf("Number is 9\n");
        break;
    case 8:
        printf("Number is 8\n");
    defult:
        printf("unknown");
    }

 return 0;
}
