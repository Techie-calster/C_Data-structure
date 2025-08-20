#include<stdio.h>
int partition(int A[],int low,int high)
{
    int i=low+1;
    int j=high;
    int pivot =A[low];
    int temp=0;
    while(i<=j)
    {
        while(pivot>=A[i]&& i<=high)
        {
            ++i;
        }
        while(pivot<A[j]&& j>=low+1)
        {
            --j;
        }
        if(i<j)
        {
            temp=A[j];
            A[j]=A[i];
            A[i]=temp;

        }
    }
    temp=A[low];
    A[low]=A[j];
    A[j]=temp;
    return j;


    /*while (i <= j) {
        while (i <= high && A[i] <= pivot)
            i++;
        while (j >= low + 1 && A[j] > pivot)
            j--;
        if (i < j) {
            temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }
    }

    temp = A[low];
    A[low] = A[j];
    A[j] = temp;

    return j;*/

}

void quick_sort(int A[],int low,int high)
{
    if(low<high)
    {
    int partition_index=partition(A,low,high);
    quick_sort(A,low,partition_index-1);
    quick_sort(A,partition_index+1,high);
    }
}
int main()
{
    int Arr[5]={};
    int term=5;
    printf("Enter element");
    for(int round=0;round<term;round++)
    {
        scanf("%d",&Arr[round]);
    }
    quick_sort(Arr,0,term-1);
    printf("Sorted array");
    for(int k=0;k<term;k++)
    {
        printf("%d\t",Arr[k]);
    }
    printf("\n");
}