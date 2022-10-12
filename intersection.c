#include<stdio.h>
void create(int c[])
{
    int i,n;
    printf("enter the size of array");
    scanf("%d",&n);
    c[0]=n;
    printf("enter array elements");
    for(i=1;i<=n;i++){
        scanf("%d",&c[i]);
    }
}
void print(int c[])
{
    int n,i;
    n=c[0];
    printf("the array is \n");
    for(i=1;i<=n;i++){
       printf("%d\n",c[i]);
    }

}

void main()
{
    int a[10],b[10],c[20];
    create(a);
    print(a);
    create(b);
    print(b);
}


