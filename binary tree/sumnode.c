#include<stdio.h>
#include<stdlib.h>
#include <math.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
static int sum=0;
struct node *makenode(int x)
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
void inorder(struct node **p)
{
    if((*p)!=NULL)
    {
        inorder(&((*p)->left));
        printf("%d\t",(*p)->data);
        inorder(&((*p)->right));
    }
}
int count(struct node *p)
{
    if((p)==NULL)
    {
        return 0;
    }
    else
    return (1+count(((p)->right))+count(((p)->left)));
}
int countleaf(struct node *p)
{
    if(p==NULL)
    return 0;
    else
    {
        if(p->left==NULL && p->right==NULL)
        return 1;
        else
        return(countleaf(p->left)+countleaf(p->right));
    }
}
int countN2(struct node *p)
{
    if(p==NULL)
        return 0;
    else
    {
        if(p->left==NULL && p->right==NULL)
            return 0;
        else
        {
            if(p->left!=NULL && p->right!=NULL)
                return(1+(countN2(p->left)+countN2(p->right)));
            else
                return((countN2(p->left)+countN2(p->right)));
        }
        
    }
}
int countN1(struct node *p)
{
    if(p==NULL)
        return 0;
    else
    {
        if(p->left==NULL && p->right==NULL)
            return 0;
        else
        {
            if(p->left!=NULL && p->right!=NULL)
                return((countN1(p->left)+countN1(p->right)));
            else
                return(1+(countN1(p->left)+countN1(p->right)));
        }
        
    }
}
int max(int x,int y)
{
    if(x>y)
    return x;
    else
    return y;
}
int height(struct node *p)
{
    if(p==NULL)
    {
        return 0;
    }
    else
    {
        if(p->left==NULL && p->right==NULL)
        return 0;
        else
        return (max(height(p->left),height(p->right))+1);
    }
}
void strictly(struct node *p)
{
    int n0,n2;
    n0=countleaf(p);
    n2=countN2(p);
    if(n0==(n2+1))
    printf("\nstrictly binary tree");
    else
    printf("\nnot a strictly binar tree");
}
void complete(struct node *p)
{
    int n,h;
    n=count(p);
    h=height(p);
    if(n==(pow(2,h+1)-1))
    printf("\ncomplete binary tree");
    else
    printf("\nnot a complete binar tree");
}
void sume(struct node *p)
{
    
    if((p)!=NULL)
    {
        sum=sum+(p)->data;
        sume(p->left);
        sume(p->right);
    }
}
void main()
{
    struct node *root;
    root=NULL;
    int x;
    root=makenode(1);
    root->left=makenode(2);
    root->right=makenode(3);
    root->right->left=makenode(7);
    root->right->right=makenode(6);
    root->left->left=makenode(4);
    root->left->right=makenode(5);
    preorder(&root);
    printf("\n");
    postorder(&root);
    printf("\n");
    inorder(&root);
    sume(root);
    printf("\nsum=%d",sum);
}