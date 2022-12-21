#include<stdio.h>
#include<stdlib.h>
//static int prei=6;
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
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
int search(int in[],int s,int e,int data)
{
    for(int i=s;i<=e;i++)
    {
        if(in[i]==data)
        return i;
    }
}
struct node *buildtree(int post[],int in[],int s,int e,int *prei)
{
    if(s>e)
    return NULL;
    struct node *p;
    p=makenode(post[*prei]);
    *prei=*prei-1;
    if(s==e)
    return p;
    int i=search(in,s,e,p->data);
    p->right=buildtree(post,in,i+1,e,prei);
    p->left=buildtree(post,in,s,i-1,prei);
    
    return p;
}
void main()
{
    int post[]={4,5,2,6,7,3,1};
    int in[]={4,2,5,1,6,3,7};
    int a=sizeof(in)/sizeof(in[0]);
    int b=0;
    //printf("inorder\n");
    int n=a-1;
    struct node *root=buildtree(post,in,b,(a-1),&n);
    printf("inorder\n");
    inorder(&root);
    printf("\npostorder\n");
    postorder(&root);
    printf("\npreorder\n");
    preorder(&root);
    
}