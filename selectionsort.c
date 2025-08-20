#include<stdio.h>
void selectionsort(int A[],int num)
{
    int min,temp,index;
    for(int round=0;round<num-1;round++)
    {
        index=round;
        for(int i=round+1;i<num;i++)
        {
            if(A[index]>A[i])
            {
                index=i;
            }
        }
        int temp=A[round];
        A[round]=A[index];
        A[index]=temp;
    }
    printf("Sorted element");
    for(int j=0;j<num;j++)
    {
        printf("%d\t",A[j]);
    }
}
int main()
{
    int arr[5];
    printf("Enter element");
    for(int ele=0;ele<5;ele++)
    {
        scanf("%d,",&arr[ele]);
    }
    selectionsort(arr,5);
    return 0;
}