#include<iostream>
#include<cmath>
#include<math.h>
using namespace std;

int main() {
	string s;
	cin >> s;
	int sum = 0;

	for (int i = 0; i < s.length(); i++) {
		if (s[i] == 90 || s[i] == 89) {
			sum += 10;
		}
		else if (s[i] >= 'S') {
			sum += floor(s[i] / 3) - 19;
		}
		else {
			sum += round((s[i] / 3.0)) - 19;
		}

	}

	cout << sum ;
}