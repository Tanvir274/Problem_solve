#include<stdio.h>
void main()
{
    int numbers;
    printf("Enter the number:");
    scanf("%d",&numbers);
    switch(numbers)
    {
    case 423:
        printf("campus");
        break;
    case 432:
        printf("Floor");
        break;
    case 441:
        printf("Room");
        break;
    case '234':
        printf("2nd room");
        break;

    case 534:
        printf("5th room");
        break;
    case 132:
        printf("1st room");
        break;
    default:
        printf("Nothing");
        break;





    }
}
