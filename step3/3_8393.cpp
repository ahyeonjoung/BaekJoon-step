#include<iostream>
using namespace std;

int main() {
	int n = 1;
	int sum = 0;
	cin >> n;
	
	for (int i = 1; i <= n; i++) {
		sum += i;
	}
	cout << sum;
}