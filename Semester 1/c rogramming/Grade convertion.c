#include<stdio.h>
void main()
{
  int number;

printf("Enter your Number,must be (Number<=100):");


scanf("%d",&number);

number=number/10;
switch (number)
{
  case 10:
  case 9:
  case 8:
      printf ("your result is:A+");
     break;
  case 7:
      printf ("your result is:A");
      break;
  case 6:
      printf ("your result is:A-");
      break;
  case 5:
      printf ("your result is:B");
      break;
  case 4:
      printf ("your result is:C");
      break;
  default:
      printf("Your result is Fail");
}
printf("\n");
return main();

}
