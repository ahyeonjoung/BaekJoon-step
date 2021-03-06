#include<string>
#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;

int main() {
	int a, b, c, num = 0;
	int* p = new int[10];
	int tmp = 0;
	cin >> a >> b >> c;
	num = a * b * c;
	string s = to_string(num); //int to string
	int length =s.length(); //array size
	for (int i = 0; i < 10; i++) {
		p[i] = 0;
	}
		for (int i = 0; i < length; i++) {
			p[s[i]-'0']++; //char to int
		}
		for (int i = 0; i < 10; i++) {
			cout << p[i] << "\n";
		}
}