#include<stdio.h>
void main()
{
 int passward;

 printf("Enter Your Password");
 scanf("%d", &passward);


 if (passward == 0000){
    printf("1. withdraw money\n");
    printf("2. deposit money\n");
    printf("3. check money\n");

 }
 else{
    printf("invalid pass");
 }
}
