#include<iostream>
using namespace std;

bool Num(int n) {
	if (n < 100)
		return true;
	else if (n < 1000) {
		int a = n / 100;
		int b = (n/10)%10;
		int c = n % 10;
		if (a - b == b - c)
			return true;
		else
			return false;
	}
}

int main() {

	int n;
	int cnt = 0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		if (Num(i) == true)
			cnt++;
	}
	cout << cnt;

} 

