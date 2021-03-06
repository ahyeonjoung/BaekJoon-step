#include <iostream>
using namespace std;

int main() {
	int t=0;
	int a, b = 0;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin.tie(NULL);
		cin >> a >> b;
		cout << "Case #" << i + 1 << ": " << a + b<<"\n";
	}
}