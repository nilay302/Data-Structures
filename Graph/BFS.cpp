#include <bits/stdc++.h>
using namespace std;
void BFS(vector<vector<int>> &graph, vector<int> &visited, int root)
{
    queue<int> node;
    node.push(root);
    visited[root] = 1;
    while (!node.empty())
    {
        for (auto i : graph[node.front()])
        {
            if (visited[i] != 1)
            {
                node.push(i);
                visited[i] = 1;
            }
        }
        cout << node.front() << " ";
        node.pop();
    }
}
int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> graph(n + 1);
    for (int i = 0; i < m; i++)
    {
        int j, k;
        cin >> j >> k;
        graph[j].push_back(k);
        graph[k].push_back(j);
    }
    int root;
    cin >> root;
    vector<int> visited(n, 0);
    BFS(graph, visited, root);
    return 0;
}