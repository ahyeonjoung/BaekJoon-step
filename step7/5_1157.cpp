#include <iostream>
#include<string>
using namespace std;

int main() {
	string s;
	cin >> s;
	int* alpha = new int[26];
	fill_n(alpha, 26, 0);
	int max = 0;
	int cnt = 0;
	for (int i = 0; i < s.length(); i++) {
		if ('a' <= s[i] && 'z' >= s[i])
			alpha[s[i]-97]++;
		else
			alpha[s[i]-65]++;
	}

	for (int i = 0; i < 26; i++) {
		if (max < alpha[i]) {
			max = alpha[i];
			cnt = i;
		}
		else if (max == alpha[i])
			cnt = -1;
	}
	if (cnt == -1)
		cout << '?';
	else
		cout << char(cnt + 65);

	cout<<int('Z');



}