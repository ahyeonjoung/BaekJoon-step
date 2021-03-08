#include<iostream>
using namespace std;

int Self(int n) {
	int result = 0;
	if (n < 10)
		result = n + n;
	else if (n < 100)
		result = n + n / 10 + n % 10;
	else if (n < 1000)
		result = n + Self(n/10)-(n/10)+ n % 10;
	else if (n < 10000)
		result += n + Self(n / 10)-(n/10) + Self(n % 10)-(n%10);

	return result;
}

int main() {
	bool* p = new bool[15000];
	for (int i = 0; i < 15000; i++) {
		p[i] = false;
	}

	for (int i = 0; i < 9999; i++) {
		p[Self(i)] = true;
	}

	for (int i = 0; i < 9999; i++) {
		if (p[i] == false)
			cout << i <<"\n";
	}
	

}