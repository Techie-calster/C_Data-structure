#include<stdio.h>
#include<stdlib.h>
struct node
{
    struct node *left;
    int value;
    struct node *right;
};
struct node* new(int data)
{
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    newnode->value=data;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
}
int main()
{
    struct node* root;
    root=new(10);
    root->left=new(9);
    root->right=new(8);
    root->left->left = new();
    struct node* temp = root;
    root = root->left;

}