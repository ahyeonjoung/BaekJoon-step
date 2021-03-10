#include<iostream>
using namespace std;

int main() {
	int n = 0;
	cin >> n;
	char* p = new char[n];
	int sum = 0;
	for (int i = 0; i < n; i++) {
		cin >> p[i];
		sum += p[i] - '0';
	}
	cout << sum;

}