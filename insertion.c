
// Online C compiler to run C program online
#include <stdio.h>
void printarray(int*A,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d",&n);
    }
}
void insertsort(int*A,int n)
{
    int key,j;
    for(int i=1;i<=n-1;i++)
    {
        key=A[i];
        j=i-1;
    while(j>=0&&A[j]>key)
    {
        A[j+1]=A[j];
        j--;
    }
    A[j+1]=key;
    }
}
int main()
{
    int A[]={32,12,345,321,32,43};
    int n=6;
    printarray(A,n);
    insertsort(A,n);
    printarray(A,n);
    return 0;
}
