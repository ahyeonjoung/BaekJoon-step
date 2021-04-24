#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector <int> num;
	int temp = 0;

	for (int i = 0; i < n; i++) {
		scanf_s("%d", &temp);
		num.push_back(temp);
	}
	sort(num.begin(), num.end());

	for (int i = 0; i < n; i++) {
		printf("%d\n", num[i]);
	}
}