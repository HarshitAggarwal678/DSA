#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
    struct node *next;
    int level;
};
struct Queue
{
    struct node *rear;
    struct node *front;
};
void Initialise(struct Queue *q)
{
    (q)->front=NULL;
    (q)->rear=NULL;
}
struct node *makenode(int x)
{
    struct node *p;
    p=(struct node*)malloc(sizeof(struct node));
    p->data=x;
    p->left=NULL;
    p->right=NULL;
    p->next=NULL;
    p->level=0;
    return p;
}
struct node *DeQueue(struct Queue *q)
{
    struct node *p;
    p=(q)->front;
    (q)->front= (q)->front->next;
    if((q)->front==NULL)
    {
        (q)->rear=NULL;
    }
    return p;

}
struct node *EnQueue(struct Queue *q,struct node **x)
{
    struct node *p;
    p=(*x);
    if((q)->rear!=NULL)
    {
        (q)->rear->next=p;
        (q)->rear=p;
    }
    else
    {
        (q)->front=p;
        (q)->rear=p; 
    }
}
int IsEmpty(struct Queue *q)
{
    if((q)->front==NULL)
    {

        return 1;
    }
    else
    return 0;
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
void levelorder(struct node **p)
{
    struct Queue q;
    struct node *k;
    k=NULL;
    Initialise(&q);
    EnQueue(&q,p);
    while(!(IsEmpty(&q)))
    {
        k=DeQueue(&q);
        
        if((k)->left!=NULL)
        {
            EnQueue(&q,&((k)->left));
        }
        if((k)->right!=NULL)
        {
            EnQueue(&q,&((k)->right));
        }
        printf("%d\t",(k->data));
    }
}
void InsertHT(int n,int m,int arr[][m],struct node **p,int h)
{
    int r;
    r=(*p)->level;
    int c=0;
    while( arr[r][c]!=0 )
    {
    c++;
    }
    arr[r][c]=(*p)->data; 
}
void LeftRight(struct node **root,int n,int m,int arr[][m],int h)
{
    struct node *p;
    p=*root;
    struct Queue q;
    Initialise(&q);
    p->level=0;
    EnQueue(&q,&p);
    InsertHT(n,m,arr,&p,h);
    while(!IsEmpty(&q))
    {
        p=DeQueue(&q);
        if(p->left!=NULL)
        {
            p->left->level=p->level+1;
            InsertHT(n,m,arr,&(p->left),h);
            EnQueue(&q,&(p->left));
        }
        if(p->right!=NULL)
        {
            p->right->level=p->level+1;
            InsertHT(n,m,arr,&(p->right),h);
            EnQueue(&q,&(p->right));
        }
        printf("%d",p->data);
    }
    printf("\n Left traversal : ");
    for(int i=0;i<h+1;i++)
    {
        printf("%d",arr[i][0]);
    }
    printf("\n Right traversal : ");
    for(int i=0;i<h+1;i++)
    {
        int j=0;
        while(arr[i][j]!=0)
        {
            j++;
        }
        printf("%d",arr[i][j-1]);
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
    printf("\n");
    printf("levelorder\n");
    //levelorder(&root);
    int h=height(root);
    int a,b;
    a=h+1;
    b=(2*h)+1;
    int HT[a][b];
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            HT[i][j]=0;
        }
    }
    LeftRight(&root,a,b,HT,h);
}