#include<stdio.h>
int binarySearch(int arr[],int size,int element)
{
    int low,high,mid;
    low=0;
    high=size-1;

    while(low<=high){
        mid=(low+high)/2;

        if (arr[mid]==element)
        {


        return mid;
        }
        else if(arr[mid]<element)
        {


            low=mid+1;}
        else{
            high=mid-1;
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
    int searchindex=binarySearch(arr,size,element);
    printf("element is %d and found at index %d",element,searchindex+1);
    return 0;
}
