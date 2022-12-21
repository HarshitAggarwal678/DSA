#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
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
        printf("%d\t",(*p)->data);
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
        printf("%d\t",(*p)->data);
    }
}
void CreateTree(struct node **t)
{
    int choice,x;
    struct node *p;
    printf("whether left of %d exist or not 1/0 ",(*t)->data);
    scanf("%d",&choice);
    if(choice == 1)
    {
        printf("input data of left of %d ",(*t)->data);
        scanf("%d",&x);
        p=makenode(x);
        (*t)->left=p;
        CreateTree(&p);
    }
    printf("whether right of %d exist or not 1/0",(*t)->data);
    scanf("%d",&choice);
    if(choice == 1)
    {
        printf("input data of right of %d",(*t)->data);
        scanf("%d",&x);
        p=makenode(x);
        (*t)->right=p;
        CreateTree(&p);
    }
}
void inorder(struct node **p)
{
    if((*p)!=NULL)
    {
        inorder(&((*p)->left));
        printf("%d\t",(*p)->data);
        inorder(&((*p)->right));
    }
}
void main()
{
    struct node *root;
    root=NULL;
    int x;
    printf("input the information of root node");
    scanf("%d",&x);
    root=makenode(x);
    CreateTree(&root);
    preorder(&root);
    printf("\n");
    postorder(&root);
    printf("\n");
    inorder(&root);
}