#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>

using namespace std;
int result = -1;

void bfs(int start, vector<vector<int>>graph, vector <bool> check) {
	queue<int> q;
	q.push(start);
	check[start] = true;
	while (!q.empty()) {
		int temp = q.front();
		q.pop();
		result ++;
		for (int i = 0; i < graph[temp].size(); i++) {
			if (check[graph[temp][i]] == false) {
				q.push(graph[temp][i]);
				check[graph[temp][i]] = true;
			}
		}
	}
}


int main() {
	int n, m;
	cin >> n >> m ;
	vector<vector<int>> graph(n + 1);
	vector<bool>check(n + 1);
	for (int i = 0; i < m; i++) {
		int u, v;
		cin >> u >> v;
		graph[u].push_back(v);
		graph[v].push_back(u);
	}

	for (int i = 1; i <= n; i++)
		sort(graph[i].begin(), graph[i].end());


	bfs(1, graph, check);
	cout << result;
}