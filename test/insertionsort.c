#include<stdio.h>
void insertion(int A[],int n)
{
    int i=0,pass=0,temp=0;
    for(pass=1;pass<n;pass++)
    {
        temp=A[pass];
        for(i=pass-1;i>=0&&temp<A[i];i--)
        {
            A[i+1]=A[i];
        }
        A[i+1]=temp;
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
    int A[5];
    int term = 5;
    printf("Enter element");
    for(int index=0;index<term;index++)
    {
        scanf("%d",&A[index]);
    }
    insertion(A,5);
    return 0; 
}