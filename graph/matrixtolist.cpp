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
    int ADl[V][V];
    vector<int>Li[V];
    for(int i=0 ; i<V ; i++)
    {
        for(int j=0 ; j<V ; j++)
        {
            ADl[i][j]=0;
        }
    }
    for(int i=1;i<E+1;i++)
    {
        cout<<"enter edges"<<i;
        int a,b;
        cin>>a>>b;
        ADl[a][b]=1;
        ADl[b][a]=1;
    }
    for(int i=0;i<V;i++)
    {
        cout<<i<<":";
        for(int j=0;j<V;j++)
        {
            cout<<ADl[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=0;i<V;i++)
    {
        for(int j=0;j<V;j++)
        {
            if(ADl[i][j]==1)
            {
                Li[i].push_back(j);
            }
        }
        cout<<endl;
    }
    for(int i=0;i<V;i++)
    {
        cout<<i<<":";
        for(int j=0;j<Li[i].size();j++)
        {
            cout<<Li[i][j]<<" ";
        }
        cout<<endl;
    }
return 0;
}
