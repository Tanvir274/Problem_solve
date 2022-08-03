#include<stdio.h>
void main()
{
    int n,q,next,i;
    int list[100];
    printf("\nHow many number will be listed? ");
    scanf("%d",&n);
    printf("\n");
    for(i=0;i<n;++i)
    {
        printf("item %d= ",i+1);
        scanf("%d",&list[i]);
    }
    next=1;
    do
    {
       printf("\nHow many number will be searched? ");
    scanf("%d",&q);
    for(i=0;i<n;++i)
        if(list[i]==q)
    {
        printf("Found in item %d.\n",i+1);
        break;
    }
    if(i==n)

        printf("Not found other.\n",&list[i]);
        printf("type 1 to find another\n");
        printf("type 0 to quit\n?");
        scanf("%d",&next);

    }while(next);
}
