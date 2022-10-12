#include<stdio.h>
int linearsearch(int arr[],int size,int element)
{
    for(int i=0;i < size;i++)
    {
        if (arr[i]==element)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int size,i,element;
    int arr[100];
      printf("Syed Waiz ul hasan\n 2021320130178\n");
    printf("Enter size of an array ");
    scanf("%d",&size);
    printf("enter the array ");
    for( i=0;i < size;i++)
    scanf("%d",&arr[i]);
    printf("enter the element to be searched");
    scanf("%d",&element);


    int searchindex=linearsearch(arr,size,element);
    printf("the element is %d and index number is %d",element,searchindex+1);
    return 0;
}
