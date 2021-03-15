#include <iostream>
#include <string>
using namespace std;

int main() {
	string s1, s2;
	char temp;
	cin >> s1 >> s2;

		temp = s1[0];
		s1[0] = s1[2];
		s1[2] = temp;
		temp = s2[0];
		s2[0] = s2[2];
		s2[2] = temp;


	if (stoi(s1) > stoi(s2))
		cout << s1; //not yet
	else
		cout << s2;
}