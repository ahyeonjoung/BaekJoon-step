#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int n = 0;
	int maxNum = 0, cnt = 0;
	int* p = new int[9];
	for (int i = 0; i < 9; i++) {
		cin.tie(NULL);
		cin >> p[i];
		if (maxNum < p[i]) {
			maxNum = p[i];
			cnt = i+1;
		}
	}
	cout << maxNum<<"\n"<<cnt;




	delete[] p;


}