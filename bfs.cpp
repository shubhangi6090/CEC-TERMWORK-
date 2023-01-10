#include <bits/stdc++.h>
using namespace std;
vector<int> BFS(int src, vector<int> &vis, vector<int> adj[], vector<int> &bfs)
{
    queue<int> q;
    q.push(src);
    vis[src] = 1;
    while (!q.empty())
    {
      int node = q.front();
      q.pop();
      bfs.push_back(node);
      for (auto it : adj[node])
      {
        if (!vis[it])
        {
          q.push(it);
          vis[it] = 1;
        }
      }
    }
    return bfs;
}
vector<int> bfsOfGraph(int V, vector<int> adj[])
{
  vector<int> vis(V, 0);
  vector<int> res;
  for (int i = 1; i < V; i++)
  {
    if (!vis[i])
    {
      BFS(i, vis, adj, res);
    }
  }
  return res;
}
int main()
{
  cout << "enter the nodes of graph" << endl;
  int n, m;
  cin >> n;
  cout << "Enter the number of edges of graph" << endl;
  cin >> m;
  vector<int> arr[n + 1];
  for (int i = 0; i < m; i++)
  {
    int u, v;
    cin >> u;
    cin >> v;
    arr[u].push_back(v);
    // arr[v].push_back(u);     //remove this for directed gragh;
  }
  for (int i = 1; i < n + 1; i++)
  {
    cout << i << "->";
    for (int x : arr[i])
    {
      cout << x << " ";
    }
    cout << endl;
  }
  vector<int> res = bfsOfGraph(n + 1, arr);
  for (int i = 0; i < res.size(); i++)
  {
    cout << res[i] << "->";
  }
}
