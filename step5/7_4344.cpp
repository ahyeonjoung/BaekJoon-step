#include<iostream>
using namespace std;

int main() {
	int c = 0,n=0;
	cin >> c;
	float avg = 0.0, result = 0.0;

	for (int i = 0; i < c; i++) {
		avg = 0;
		result = 0;
		cin >> n;
		float* p = new float[n];
		for (int i = 0; i < n; i++) {
			cin >> p[i];
			avg += p[i];
		}
		avg = avg / n;
		for (int i = 0; i < n; i++) {
			if (p[i] > avg)
				result++;
		}
		cout<<fixed;
		cout.precision(3);
		cout << result / n * 100<<"%\n";
	}
}