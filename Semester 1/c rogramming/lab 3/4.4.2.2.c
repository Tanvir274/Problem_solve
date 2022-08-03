#include<stdio.h>
void main()
{
    float a,div;
    printf("Enter a number:");
    scanf("%f",&a);
    if(a>100,a<250)
    {
        div=a/7;
        printf("Div result :%.2f",div);
    }
    else
        printf("Not found");
}
