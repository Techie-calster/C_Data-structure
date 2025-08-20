#include<stdio.h>
#include<stdlib.h>
struct node 
{
    struct node *pre;
    int data;
    struct node *next;  
};
void insertAtFront(struct node **s)
{
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&temp->data);
    temp->next=NULL;
    if(*s==NULL)
    {
        *s=temp;
        temp->pre=NULL;
    }
    else
    {
        struct node *t=*s; 
        *s=temp;
        t->pre=temp;
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
    printf("\n");
}
int main()
{
    struct node *start=NULL;
    printf("Enter number");
    for(int i=0;i<3;i++)
    {
        insertAtEnd(&start);
    }
    printf("Enter number");
    insertAtFront(&start);
    insertAtFront(&start);
    printf("List :- ");
    view(start);
    return 0;
}