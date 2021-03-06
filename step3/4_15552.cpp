#include<iostream>
using namespace std;

int main() {
	int t = 0;
	cin.tie(NULL); //속도증가
	cin >> t;
	int a, b = 0;
	for (int i = 0; i < t; i++) {
		cin.tie(NULL);
		cin >> a >> b;
		cout << a + b << "\n";
	}
}