#include<iostream>
#include<vector>
#include<queue>
using namespace std;
void BFS(vector<int> Li[],int V)
{
    vector<int> visited(V);
    queue<int> q;
    q.push(0);
    visited[0]=1;
    while(!q.empty())
    {
        int x=q.front();
        q.pop();
        for(int j=0;j<Li[x].size();j++)
        {
            if(visited[Li[x][j]]==0)
            {
                q.push(Li[x][j]);
                visited[Li[x][j]]=1;
            }
        }
        cout<<x<<" ";
    }
}
int main()
{
    int V,E;
    cout<<"enter vertex";
    cin>>V;
    cout<<"enter edge";
    cin>>E;
    vector<int>ADl[V];
    for(int i=1;i<E+1;i++)
    {
        cout<<"enter edges"<<i;
        int a,b;
        cin>>a>>b;
        ADl[a].push_back(b);
        ADl[b].push_back(a);
    }
    for(int i=0;i<V;i++)
    {
        cout<<i<<":";
        for(int j=0;j<ADl[i].size();j++)
        {
            cout<<ADl[i][j];
        }
        cout<<endl;
    }
    BFS(ADl,V);
return 0;
}
