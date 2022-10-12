#include<stdio.h>
void trans(int a[],int);
int main()
{
   int n,a[100],i;
   printf("enter the size of an array");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   trans(a,n);
   return 0;

}
void trans(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}
