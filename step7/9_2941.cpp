#include<stdio.h>
#include<vector>
#include<string>
#include<iostream>
using namespace std;

int main() {
	vector<string> croatian = { "c=","c-","dz=","d-","lj","nj","s=","z=" };
	string str;
	cin >> str;
	int index;
	for (int i = 0; i < croatian.size(); i++) {
		while (1) {
			index = str.find(croatian[i]);
			if (index == string::npos)
				break;
			str.replace(index, croatian[i].length(), "0");
		}
	}
	cout << str.length();



}