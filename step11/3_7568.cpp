#include <iostream>
#include<utility>
using namespace std;

int main() {
	int num;
	cin >> num;
	pair <int, int> arr[50];
	int rank = 1;

	for (int i = 0; i < num; i++) {
		cin >> arr[i].first >> arr[i].second;
	}

	for (int i = 0; i < num; i++) {
		for (int j = 0; j < num; j++) {
			if (arr[i].first < arr[j].first && arr[i].second < arr[j].second)
				rank++;
		}
		cout << rank << " ";
		rank = 1;
	}
}