#include<iostream>
#include<vector>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	vector <int> num(n);
	int temp = 0;
	int result = 0;
	for (int i = 0; i < n; i++) {
		cin >> num[i];
	}
	for (int i = 0; i < n; i++) {
		for (int j = i+1; j < n; j++) {
			for (int k = j + 1; k < n; k++) {
				temp = num[i] + num[j] + num[k];
				if (temp <= m && result < temp)
					result = temp;
			}
		}
	}
	cout << result;

}