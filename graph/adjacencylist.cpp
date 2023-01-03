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
return 0;
}