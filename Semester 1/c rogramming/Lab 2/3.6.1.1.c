#include<stdio.h>
void main()
{
    char x,y;
    printf("Input an alphabet in small letter: ");
    scanf("%c",&x);
    y=x-32;
    printf("%c in capital letter is %c",x, y);
}
