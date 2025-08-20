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
void search(struct node *s)
{
    int search_element=0,flag;
    printf("Enter search element ");
    scanf("%d",&search_element);
    while(s!=NULL)
    {
        if(search_element==s->data)
        {
            printf("Search successfull %d",s->data);
            flag=1;
            break;
        }
        s=s->next;  
    }
    if(flag!=0)
    printf("Search unsuccessfull element not found");
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
    printf("Enter a number");
    for(int i=0;i<3;i++)
    {
        insertAtEnd(&start);
    }
    view(start);
    search(start);
    return 0;
}