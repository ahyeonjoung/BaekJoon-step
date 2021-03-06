#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	int* num = new int[10];
	int* arr = new int[42];
	int cnt = 0;
	int i = 0;
	for (i = 0; i < 10; i++) {
		cin >> num[i];
		num[i] = num[i] % 42;
	}

	fill(arr, arr + 42, 0); //ÃÊ±âÈ­
		
	for (i = 0; i < 10; i++)
		arr[num[i]]++;

	for (i = 0; i < 42; i++)
		if (arr[i] != 0)
			cnt++;

	cout << cnt;

}