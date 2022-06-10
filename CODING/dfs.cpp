#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<queue>
 using namespace std;
 const int N=1e5+10;
 bool vis[N];
 vector<int> adj[N];
 void dfs(int src)
 {

     vis[src]=true;
     cout<<src<<" ";
     for(int child:adj[src])
     {
         if(vis[child]) continue;

         dfs(child);
     }
     
 }


 int main()
{

     int n,m;
cin>>n>>mm;
// for(int i=0;i<N;i++)
// {
//     vis[i]=false;
// }
int x,y;
for(int i=0;i<m;i++)
{
    cin>>x>>y;

    adj[x].push_back(y);
    adj[y].push_back(x);
}
dfs(1);
}