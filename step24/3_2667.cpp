#include<iostream>
#include<vector>
#include<algorithm>
 
using namespace std;

int dx[4] = { 1,-1,0,0 };
int dy[4] = { 0,0,1,-1 };
int cnt = 0;
bool visit[25][25];
int arr[25][25];
int N;

void dfs(int x, int y) {
	cnt++;
	visit[x][y] = true;
	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];
		if (nx < 0 || nx >= N || ny < 0|| ny >= N)
			continue;
		if (arr[nx][ny] == 1 && visit[nx][ny] == false)
			dfs(nx, ny);
	}
}

int main() {
	cin >> N;
	vector <int> result;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			char t;
			cin >> t;
			arr[i][j] = t - '0';
		}
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (arr[i][j] == 1 && visit[i][j] == false) {
				cnt = 0;
				dfs(i, j);
				result.push_back(cnt);
			}
		}
	}
	sort(result.begin(), result.end());
	cout << result.size() << "\n";
	for (int i = 0; i < result.size(); i++)
		cout << result[i] << "\n";
}
