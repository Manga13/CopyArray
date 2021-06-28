#include<stdio.h>
#define SIZE 100
void printArray(int *arr,int size)
{
        int i;
        for(i=0;i<size;i++)
                printf("%d ",arr[i]);
}
int main()
{
        int i,arr[SIZE],temp[SIZE],n;
        printf("Enter n value\n");
        scanf("%d",&n);
        int *ptr1=&arr,*ptr2=&temp,*end=&arr[n-1];
        printf("Array elements \n");
        for(i=0;i<n;i++)
                scanf("%d",&arr[i]);
        while(ptr1<=end)
        {
                *ptr2=*ptr1;
                ptr1++;
                ptr2++;
        }
        printf("Source array after copying\n");
        printArray(temp,n);
        printf("\n");
        printf("Destination array after copying\n");
        printArray(temp,n);
        return 0;
}
