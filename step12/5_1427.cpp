#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

bool descent(int a, int b) {
	return a > b;
}

int main() {
	string c;
	cin >> c;
	vector <int> v;
	for (int i = 0; i < c.length(); i++) {
		v.push_back(int(c[i]-'0'));
	}
	sort(v.begin(), v.end(), descent);

	for (int i = 0; i < v.size(); i++) {
		cout << v[i];
	}

}