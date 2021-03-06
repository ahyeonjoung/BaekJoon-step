#include <iostream>
#include <cstring>
#include<string.h>
#include<cstdlib>
using namespace std;

int main() {
	int t = 0;
	cin >> t;
	cin.ignore(); //버퍼비우기
	char a[81];
	int result = 0,temp=0;
	bool flag = true;
	for (int i = 0; i < t; i++) {
		cin.getline(a, 81); //마지막 공백문자 포함
		result = 0;
		temp = 1;
		flag = false;
		for (int j = 0; a[j] != '\0'; j++) {
			if (a[j] == 'O'&&flag) {
				temp++;
				result += temp;
			}
			else if (a[j] == 'O' && !flag) {
				temp = 1;
				flag = true;
				result += temp;
			}
			else if (a[j] == 'X') {
				temp = 1;
				flag = false;
			}
		}
		cout << result << "\n";
	}

}