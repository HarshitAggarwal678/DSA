#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
    struct node *next;
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
void levelorder(struct node **p)
{
    printf("1hii\n");
    struct Queue q;
    struct node *k;
    k=NULL;
    printf("2hii\n");
    Initialise(&q);
    printf("2hii\n");
    EnQueue(&q,p);
    printf("2hii\n");
    while(!(IsEmpty(&q)))
    {
        printf("hii");
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
void main()
{
    struct node *root;
    root=NULL;
    int x;
    printf("input the information of root node");
    scanf("%d",&x);
    root=makenode(x);
    CreateTree(&root);
    printf("\n");
    printf("preorder\n");
    preorder(&root);
    printf("\n");
    printf("postorder\n");
    printf("\n");
    postorder(&root);
    printf("\n");
    printf("inorder\n");
    inorder(&root);
    printf("\n");
    printf("levelorder\n");
    levelorder(&root);
}