#include<iostream>
using namespace std;

int n, m;
int arr[9] = { 0, }; //������ ���ڸ� ������ �迭
bool visited[9] = { 0, }; //������ �������� �Ǵ��� �� �ִ� �迭

void dfs(int cnt) {
	if (cnt == m) { //m���� ���ڰ� �����Ǿ��ٸ� 
		for (int i = 0; i < m; i++) {
			cout << arr[i] << ' '; //������ ���ڵ� ���
		}
		cout << "\n";
		return; //��� Ż��
	}
	for (int i = 1; i <= n; i++) {
		visited[i] = true; //i�� ����
		arr[cnt] = i; //arr�� �߰�
		dfs(cnt + 1); //���
		visited[i] = false; //�� ���� �����ܰ�
	}
}

int main() {
	cin >> n >> m;
	dfs(0);
}