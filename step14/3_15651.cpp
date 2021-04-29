#include<iostream>
using namespace std;

int n, m;
int arr[9] = { 0, }; //선정된 숫자를 저장할 배열
bool visited[9] = { 0, }; //선정된 숫자인지 판단할 수 있는 배열

void dfs(int cnt) {
	if (cnt == m) { //m개의 숫자가 선정되었다면 
		for (int i = 0; i < m; i++) {
			cout << arr[i] << ' '; //선정된 숫자들 출력
		}
		cout << "\n";
		return; //재귀 탈출
	}
	for (int i = 1; i <= n; i++) {
		visited[i] = true; //i를 선정
		arr[cnt] = i; //arr에 추가
		dfs(cnt + 1); //재귀
		visited[i] = false; //그 전의 성공단계
	}
}

int main() {
	cin >> n >> m;
	dfs(0);
}