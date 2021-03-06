#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	float* p = new float[n];
	float temp = 0,result=0;
	for (int i = 0; i < n; i++) {
		cin >> p[i];
		if (temp < p[i])
			temp = p[i];
	}
	for (int i = 0; i < n; i++) {
		p[i] = p[i] / temp * 100;
	}
	for (int i = 0; i < n; i++)
		result += p[i];

	cout << result / n;
}