#include<iostream>
using namespace std;

int main() {
	int t = 0;
	cin >> t;
	int a, b = 0;
	for (int i = 0; i < t; i++) {
		cin >> a >> b;
		cout << a + b << endl;
	}
}