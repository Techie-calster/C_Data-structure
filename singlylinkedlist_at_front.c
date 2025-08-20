#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data;
    struct node *next;
};
void insertAtFront(struct node**s)
{
    struct node *temp=(struct node *)malloc(sizeof(struct node));
    scanf("%d",&temp->data);
    temp->next=NULL;
    if(*s==NULL)
        *s=temp;
    else
    {
        struct node *t=*s;
        *s=temp;
        temp->next=t;
    } 
}
void view(struct node *s)
{
    if(s==NULL)
    {
        printf("Empty list");
    }else
    {
        while(s!=NULL)
        {
            printf("%d\t",s->data);
            s=s->next;
        }
    }
}
int main()
{
    struct node *start=NULL;
    int n=0;
    printf("Enter no. terms");
    scanf("%d",&n);
    printf("Enter no.");
    for(int i=0;i<n;i++)
    {
        insertAtFront(&start);
    }
    printf("List :- ");
    view(start);
    return 0;
}