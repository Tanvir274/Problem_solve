#include<stdio.h>
void main()
{
    int n,i,j,tempval;
    int list[100];
    printf("\nHow many number will be listed?:");
    scanf("%d",&n);
    printf("\n");
    for(i=0;i<n;++i)
    {
        printf("item %d= ",i+1);
        scanf("%d",&list[i]);
    }
    for(i=0;i<n-1;++i)
        for(j=i+1;j<1;++j)
        if(list[i]>list[j])
    {
        tempval=list [i];
        list[i]=list[j];
        list[j]=tempval;
    }
    printf("\nThe sorted list:\n\n");
    for(i=0;i<n;++i)
        printf("item %d=%d\n",i+1,list[i]);
}
