#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
    struct node *father;
};
struct node *makenode(int x)
{
    struct node *p;
    p=(struct node*)malloc(sizeof(struct node));
    p->data=x;
    p->left=NULL;
    p->right=NULL;
    p->father=NULL;
    return p;
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
void BSTInsert(struct node **r,int x)
{
    struct node *p,*q;
    p=*r;
    q=NULL;

    if(p==NULL)
    {
        (*r)=makenode(x);
    }
    else
    {
    while((p)!=NULL)
    {
        if(x<p->data)
        {
            q=p;
            p=p->left;
        }
        else
        {
            q=p;
            p=p->right;
        }
    }
    if(x<q->data)
    {
        q->left=makenode(x);
        q->left->father=q;

    }
    else
    {
        q->right=makenode(x);
        q->right->father=q;
    }
    }
}
struct node *BSTSearch(struct node **root,int key)
{
    struct node *p;
    p=(*root);
    while(p!=NULL)
    {

        if(p->data==key)
        {
            return(p);
        }
        else
        {
            if(key<p->data)
            p=p->left;
            else
            p=p->right;
        }
    }
    return NULL;
}
struct node *mini(struct node **root)
{
    struct node *p;
    p=(*root);
    while(p->left!=NULL)
    {
        p=(p)->left;
    }
    return p;
}
struct node *maxe(struct node **root)
{
    struct node *p;
    p=(*root);
    while(p->right!=NULL)
    {
        p=(p)->right;
    }
    //printf("%d",p->data);
    return (p);
}
struct node *BSTSuccessor(struct node *root)
{
    struct node *p,*q;
    q=NULL;
    p=root;
    if(p->right!=NULL)
        {
            q=mini(&(p->right));
            return q;
        }
    else
    {
        q=p->father;
        while ((q!=NULL) && (q->right==p))
        {
            p=q;
            q=q->father;
        }
    }
    return q;
}
struct node *BSTPredecessor(struct node *root)
{
    struct node *p,*q;
    q=NULL;
    p=root;
    if(p->left!=NULL)
        {
            q=maxe(&(p->right));
            return q;
        }
    else
    {
        q=p->father;
        while ((q!=NULL) && (q->left==p))
        {
            p=q;
            q=q->father;
        }
    }
    return q;
}
void main()
{
    struct node *t,*q,*c,*y;
    t=NULL;
    struct node *x=0;
    BSTInsert(&t,100);
    BSTInsert(&t,200);
    BSTInsert(&t,250);
    BSTInsert(&t,300);
    BSTInsert(&t,50);
    BSTInsert(&t,70);
    BSTInsert(&t,80);
    inorder(&t);
    q=BSTSearch(&t,80);
    y=BSTSuccessor(q);
    printf("\n%d\n",y->data);
    q=BSTSearch(&t,200);
    y=BSTSuccessor(q);
    printf("%d\n",y->data);
    //printf("%d",q->data);
    q=BSTSearch(&t,200);
    y=BSTPredecessor(q);
    printf("%d\n",y->data);
}
