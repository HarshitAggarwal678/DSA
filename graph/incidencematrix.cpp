#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int V,E;
    cout<<"enter vertex";
    cin>>V;
    cout<<"enter edge";
    cin>>E;
    cout<<endl;
    int ADl[V][E];
    for(int i=0 ; i<E ; i++)
    {
        for(int j=0 ; j<E ; j++)
        {
            ADl[i][j]=0;
        }
    }
    for(int i=0;i<E;i++)
    { 
        cout<<"enter edges";
        int a,b;
        cin>>a>>b;
        ADl[a][i]=1;
        ADl[b][i]=1;
    }
    for(int i=0;i<V;i++)
    {
        for(int j=0;j<E;j++)
        {
            cout<<ADl[i][j]<<" ";
        }
        cout<<endl;
    }
return 0;
}
