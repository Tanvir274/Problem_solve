#include<stdio.h>
void main()
{
    int arr[40],n,i;
    printf("Enter size of array: "),
    scanf("%d",&n);
    printf("Enter %d positive elements\n",n);
    scanf("%d",&i);
    for(i=n;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\n\nEven number:%d ",i);
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            printf("%d ",arr[i]);
        }
    }
    printf("\n\nOdd number:%d ",i);
    for(i=0;i<n;i++)
    {
        if(arr[i]%2!=0)
        {
            printf("%d ",arr[i]);
        }
    }

}
