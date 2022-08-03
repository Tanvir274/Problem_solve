#include<stdio.h>
void main()
{
    int a=9,b=4,c;
    float d;
    c=a+b;
    printf("a+b=%d\n",c);
    c=a-b;
    printf("a-b=%d\n",c);
    c=a*b;
    printf("a*b=%d\n",c);
    printf("For integer division:\n");
    c=a/b;
    printf("a/b=%d(result),",c);
    c=a%b;
    printf("%d(remainder)\n",c);
    printf("For floating division:\n");
    d=a/(float)b;
    printf("a/b=%f\n",d);
    d=c+d;
    printf("c+d=%f\n",d);
    c=c+d;
    printf("c+d=%d\n",c);
}
