#include<iostream>
#include<vector>
#include<queue>
#include<stack>
#include<algorithm>

using namespace std;

void dfs(int start, vector<vector<int>>graph, vector<bool> check) {
	stack <int> s;
	s.push(start);
	check[start] = true;
	cout << start << " ";

	while (!s.empty()) {
		int temp = s.top();
		s.pop();
		for (int i = 0; i < graph[temp].size(); i++) {
			int next = graph[temp][i];
			if (check[next] == false) {
				cout << next << " ";
				check[next] = true;
				s.push(temp);
				s.push(next);
				break;
			}
		}
	}
	
}

void bfs(int start, vector<vector<int>>graph, vector <bool> check) {
	queue<int> q;
	q.push(start);
	check[start] = true;
	while (!q.empty()) {
		int temp = q.front();
		q.pop();
		cout << temp << " ";
		for (int i = 0; i < graph[temp].size(); i++) {
			if (check[graph[temp][i]] == false) {
				q.push(graph[temp][i]);
				check[graph[temp][i]] = true;
			}
		}
	}
}

int main() {
	int n, m, start;
	cin >> n >> m >> start;
	vector<vector<int>> graph(n+1);
	vector<bool>check(n + 1);
	for (int i = 0; i < m; i++) {
		int u, v;
		cin >> u >> v;
		graph[u].push_back(v);
		graph[v].push_back(u);
	}

	for (int i = 1; i <= n; i++)
		sort(graph[i].begin(), graph[i].end());

	dfs(start, graph, check);
	cout << "\n";
	bfs(start, graph, check);
}