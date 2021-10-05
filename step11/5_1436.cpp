#include<iostream>
#include<string>
using namespace std;

int main() {.  
	int arr[10000] = {0};
	int n;
	int i = 0;
	cin >> n;
	int n1 = 666;
	while (1) {
		if (to_string(n1).find("666") != string::npos) {
			arr[i] = n1;
			i++;
		}
		n1++;
		if (i == n)
			break;
	}

	cout << arr[n-1];
}
