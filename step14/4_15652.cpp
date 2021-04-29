#include<iostream>
using namespace std;

int n, m;
int arr[9] = { 0, }; //������ ���ڸ� ������ �迭
bool visited[9] = { 0, }; //������ �������� �Ǵ��� �� �ִ� �迭

void dfs(int num, int cnt) {
	if (cnt == m) {
		for (int i = 0; i < m; i++) { //m���� ���ڰ� �����Ǿ��ٸ� 
			cout << arr[i] << ' '; //������ ���ڵ� ���
		}
		cout << "\n";
		return;
	}
	for (int i = num; i <= n; i++) { //�������� ���� ���ں��� ����
			visited[i] = true; //i�� ����
			arr[cnt] = i; //arr�� �߰�
			dfs(i, cnt + 1);
			visited[i] = false; //�� ���� �����ܰ�
	}
}

int main() {
	cin >> n >> m;
	dfs(1, 0);
}