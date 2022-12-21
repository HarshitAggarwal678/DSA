#include<stdio.h>
#include<stdlib.h>
struct node
{
    char data;
    struct node *left;
    struct node *right;
};
struct node *makenode(char x)
{
    struct node *p;
    p=(struct node*)malloc(sizeof(struct node));
    p->data=x;
    p->left=NULL;
    p->right=NULL;
    return p;
}
void preorder(struct node **p)
{
    if((*p)!=NULL)
    {
        printf("%c\t",(*p)->data);
        preorder(&((*p)->left));
        preorder(&((*p)->right));
    }
}
void postorder(struct node **p)
{
    if((*p)!=NULL)
    {
        postorder(&((*p)->left));
        postorder(&((*p)->right));
        printf("%c\t",(*p)->data);
    }
}
void inorder(struct node **p)
{
    if((*p)!=NULL)
    {
        inorder(&((*p)->left));
        printf("%c\t",(*p)->data);
        inorder(&((*p)->right));
    }
}
void main()
{
    struct node *root;
    root=NULL;
    root=makenode('A');
    root->left=makenode('B');
    root->right=makenode('C');
    root->left->left=makenode('D');
    root->left->right=makenode('E');
    preorder(&root);
    printf("\n");
    postorder(&root);
    printf("\n");
    inorder(&root);
}