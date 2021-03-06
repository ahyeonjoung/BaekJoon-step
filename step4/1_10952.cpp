#include<iostream>
using namespace std;

int main() {
	int a=1, b = 1;
	while (a != 0 && b != 0) {
		cin.tie(NULL);
		cin >> a >> b;
		if(a!=0&&b!=0)
			cout << a + b << "\n";
	}
	return 0;
}