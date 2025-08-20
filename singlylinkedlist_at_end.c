#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data;
    struct node *next;
};
void insertAtEnd(struct node **s)
{
    struct node *temp=(struct node *)malloc(sizeof(struct node));
    scanf("%d",&temp->data);
    temp->next=NULL;
    if(*s==NULL)
        *s=temp;
    else
    {
        struct node *t=*s;
        while(t->next!=NULL)
        {
            t=t->next;
        }
       t->next=temp; 
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
    for(int i=0;i<3;i++)
    {
        insertAtEnd(&start);
    }
    printf("List :- ");
    view(start);
    return 0;
}