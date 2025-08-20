#include<stdio.h>
void insertionsort(int arr[],int n)
{
    int temp;
    int i;
    for(int round =1;round<n;round++)
    {
        temp=arr[round];
        for( i=round-1;i>=0 && arr[i]>temp;i--)
        {  
            arr[i+1]=arr[i];
        }
        arr[i+1]=temp;
    }
    printf("Sorted element");
    for(int j=0;j<n;j++)
    {
        printf("%d\t",arr[j]);
    }
}
int main()
{
    int num[5];
    int term = 5;
    printf("Enter element");
    for(int index=0;index<term;index++)
    {
        scanf("%d",&num[index]);
    }
    insertionsort(num,5);
    return 0; 
}