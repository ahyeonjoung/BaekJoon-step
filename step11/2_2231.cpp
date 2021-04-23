#include<iostream>
#include<string>
using namespace std;

int create(string num) {
	int result = 0;
	result += stoi(num);
	for (int i = 0; i < num.length(); i++) {
		result += int(num[i])-'0';
	}
	return result;
}

int main() {
	int num;
	cin >> num;
	int min = num;
	for (int i = 0; i < num; i++) {
		if (create(to_string(i)) == num && min >= i)
			min = i;
	}
	if (min == num)
		cout << 0;
	else
		cout << min;


}