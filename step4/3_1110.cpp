#include<iostream>
using namespace std;

int main() {
	int n = 0,temp=-1;
	int a=0, b = 0;
	int cnt = 0;
	cin >> n;
	temp = n;

	while (true) {
			a = temp / 10;
			b = temp - a*10;
			temp = a + b;
			temp = b * 10 + (temp%10);
			cnt++;
			if (temp == n)
				break;
			
		
	}
	cout << cnt << endl;
	
}