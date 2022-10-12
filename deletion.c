#include<stdio.h>
void main()
{
    int a[100],key,i,j,k,n,index;
    printf("enter the size of an array :");
    scanf("%d",&n);
    printf("enter the array elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
    printf("enter the element to be deleted");
    scanf("%d",&key);
    index=n;
    for(i=0;i<n;i++)
    if (a[i]==key)
    {
        for(j=i+1;j<index;j--)
        {
            a[j-1]=a[j];
            i--;
            index--;
        }

    }
    for(i=0;i<index;i++)
    {
        printf(" %d ",a[i]);
    }
}
