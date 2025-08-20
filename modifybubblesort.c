#include<stdio.h>
void bubble(int A[],int n)
{
    int temp,flag;
    for(int round =0;round<n-1;round++)
    {
        flag=0 ;
        for(int i=0;i<n-1-round;i++)
        {
            if(A[i]>A[i+1])
            {
                flag=1;
                temp=A[i];
                A[i]=A[i+1];
                A[i+1]=temp;
            }
        }
        if(flag!=1)
        {
            break;
        }
    }
    printf("Sorted element ");
    for(int num=0;num<n;num++)
    {
        printf("%d\t",A[num]);
    }
}
int main()
{
    int num[10];
    printf("Enter element");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&num[i]);
    }
    bubble(num,5);
    return 0;
    
}