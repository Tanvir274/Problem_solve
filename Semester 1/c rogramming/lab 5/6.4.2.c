#include<stdio.h>
void main()
{
int n,count;
float avg,d,sum=0;
float list[100];
printf("\nHow many number will be averaged?: ");
scanf("%d",&n);
printf("\n");
for(count=0;count<n;++count)
{
    printf("item=%d x= ",count+1);
    scanf("%f",&list[count]);
    sum += list[count];
}
avg=sum/n;
printf("\nThe average is %f\n\n",avg);
for(count=0;count<n;++count)
{
    d=list [count]-avg;
    printf("i=%d x=%f d=%f\n",count=1,list[count],d);
}
}
