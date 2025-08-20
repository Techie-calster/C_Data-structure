#include<stdio.h>
void selection(int A[],int n)
{
    int min,min_index,temp,i;
    for(int pass=0;pass<n-1;pass++)
    {
        min=A[pass];
        for(i=pass+1;i<n;i++)
        {
            if(min>A[i])
            {
                min=A[i];
                min_index=i;
            }
        }
        //printf("%d",min);
        //printf("%d",min_index);
        temp=A[pass];
        A[pass]=min;
        A[min_index]=temp;
        
    }
    printf("Sorted array");
    for(int k=0;k<n;k++)
    {
        printf("%d\t",A[k]);
    }
    printf("\n");
}
int main()
{
    int Arr[5];
    int term=5;
    printf("Enter element");
    for(int round=0;round<term;round++)
    {
        scanf("%d",&Arr[round]);
    }
    selection(Arr,term);
}