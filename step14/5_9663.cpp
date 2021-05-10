#include<iostream>
#include<vector>
using namespace std;

int visited[15] = { 0, };
int result = 0;
int N;

bool check(int n) {
	
	for (int i = 0; i < n; i++) {
		if(visited[i]==visited[n]||abs(visited[i]-visited[n])==n-i)
			return false;
	}
	return true;
}

void NQueen(int n) {
	if (n == N)
		result++;
	else {
		for (int i = 0; i < N; i++) {
			visited[n] = i;
			if (check(n))
				NQueen(n + 1);

		}
	}
}

int main() {
	cin >> N;
	NQueen(0);
	cout << result;
}