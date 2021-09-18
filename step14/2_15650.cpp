#include<iostream>
using namespace std;     

int n, m;
int arr[9] = { 0, }; //선정된 숫자를 저장할 배열
bool visited[9] = { 0, }; //선정된 숫자인지 판단할 수 있는 배열

void dfs(int num, int cnt) {
	if (cnt == m) {
		for (int i = 0; i < m; i++) { //m개의 숫자가 선정되었다면 
				cout << arr[i] << ' '; //선정된 숫자들 출력
		}
			cout << "\n";
			return;
	}
	for (int i = num; i <= n; i++) { //이전보다 높은 숫자부터 시작
		if (!visited[i]) {
			visited[i] = true; //i를 선정
			arr[cnt] = i; //arr에 추가
			dfs(i+1,cnt + 1);
			visited[i] = false; //그 전의 성공단계
		}
	}
}

int main() {
	cin >> n >> m;
	dfs(1,0);
}
