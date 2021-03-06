#include <iostream>
using namespace std;

int main() {
	int n, x=0;
	int temp = 0;
	cin >> n;
	cin >> x;
	for (int i = 0; i < n; i++) {
		cin >> temp;
		if (temp < x)
			cout << temp<<endl;
	}
}