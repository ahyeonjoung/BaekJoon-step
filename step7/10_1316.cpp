#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main() {
	int num;
	cin >> num;
	int arr[26] = { 0, };
	vector<string> str;
	string word;
	int sum = 0;
	char temp;
	for (int i = 0; i < num; i++) {
		cin >> word;
		str.push_back(word);
	}

	for (int i = 0; i < str.size(); i++) {
		fill_n(arr, 26, 0);
		for (int j = 1; j < str[i].length(); j++) {
			temp = str[i][j - 1];
			if (j == 1) {
				arr[str[i][j - 1] - 97] += 1;
			}
			if (temp != str[i][j]) {
				arr[str[i][j] - 97] += 1;
			}
			if (arr[str[i][j] - 97] == 2) {
				sum += 1;
				break;
			}
				
		}
	}
	cout << num - sum;
}