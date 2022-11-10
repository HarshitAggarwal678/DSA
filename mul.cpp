#include<bits/stdc++.h>
using namespace std;
int t[10];
void MS_Initialize(int n,int m){
    for(int i=0 ; i<m ; i++)
    {
        t[i]=(n/m)*i-1;
    }
}
void MSpush(int a[],int t,int x,int n,int m){
    if(t[i]==(n/m)*(i+1)-1){
        cout<<"Stack Overflows";
        exit(1);
    }
    else{
        a[t[i]]=x;
        t[i]++;
    }
}
int MSpop(int a[],int t[i],int i,int n,int m){
    if(t[i]==(n/m)*i-1){
        cout<<"Stack underflows";
        exit(1);
    }
    int x=a[t[i]];
    t[i]++;
    return x;
}
int main(){
    int n,m;
    cout<<"Enter the size of array :- ";
    cin>>n;
    int a[n];
    cout<<"Enter number of stack :- ";
    cin>>m;
    cout<<"Enter array elements :- ";
    for(int i=0 ; i<n ; i++){
        cin>>a[i];
    }
    MS_Initialize(n,m);
}