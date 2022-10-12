#include<stdio.h>
void mergesort(int a[],int b[],int c[],int m,int n){
int i,j,k;
i=j=k=0;
while(i<m&&j<n)
{
    if(a[i]<b[j])
    {
        c[k]=a[i];
        i++;
        k++;
    }
    else
    {
        c[k]=b[j];
        j++;
        k++;
    }
}
while(i<m)
{
    c[k]=a[i];
    i++;
    k++;
}
while(j<n){
    c[k]=b[j];
    j++;
    k++;
}
printf("merged array is:");
for(k=0;k<m+n;k++)
    printf("%d\n",c[k]);



}
void main()
{
    int a[100],b[100],c[100],m,n,i,j;
    printf("Enter The Size of An array a: ");
    scanf("%d",&m);
    printf("Enter the size of an array b: ");
    scanf("%d",&n);
    printf("Enter the elements of an array a :");
    for(i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the elements of an array b :");
    for(j=0;j<n;j++)
    {
        scanf("%d",&b[j]);
    }
    mergesort(a,b,c,m,n);






}
