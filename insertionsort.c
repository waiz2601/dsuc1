#include<stdio.h>
void main()
{
     int i,j,a[100],key,n;
    printf("Enter The size of an array:");
    scanf("%d",&n);
    printf("enter the array elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<n;i++)
    {
        key=a[i];
        j=i-1;
        while(j>=0&&a[j]>key)
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=key;
    }
    printf("sorted array is:");
     for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }

}
