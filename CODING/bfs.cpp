#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <queue>
using namespace std;
const int N = 1e5 + 10;

bool vis[N];
vector<int> adj[N];

void bfs(int src)
{
  queue<int> q;
  q.push(src);
  vis[src] = true;

  while (!q.empty())
  {
    int node = q.front();
    q.pop();
    cout << node << endl;
    for (int child : adj[node])
    {
      if (!vis[child])
      {
        q.push(child);
        vis[child] = true;
      }
    }
  }
}

int main()
{
  int n, m;
  cin >> n >> m;
  // for(int i=0;i<N;i++)
  // {
  //     vis[i]=false;
  // }
  int x, y;
  for (int i = 0; i < m; i++)
  {
    cin >> x >> y;

    adj[x].push_back(y);
    adj[y].push_back(x);
  }
  bfs(1);
}
