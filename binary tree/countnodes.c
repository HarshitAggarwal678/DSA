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
int count(struct node **p)
{
    if((*p)==NULL)
    {
        return 0;
    }
    else
    return (1+count(&((*p)->right))+count(&((*p)->left)));
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

void main()
{
    struct node *root;
    root=NULL;
    int x;
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
    x=0;
    x=count(&root);
    printf("\ntotal no. of nodes%d ",x);
    x=0;
    x=countleaf(root);
    printf("\ntotal no. of leaf nodes%d ",x);
    x=0;
    x=countN2(root);
    printf("\ntotal no. of N2 nodes%d ",x);
    x=0;
    x=countN1(root);
    printf("\ntotal no. of N1 nodes%d ",x);
    x=height(root);
    printf("\nheight %d ",x);

}