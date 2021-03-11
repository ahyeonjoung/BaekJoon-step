#include <iostream>
#include <string>
#include<sstream>
#include<vector>
using namespace std;

int main() {
	string s;
	getline(cin,s);
	istringstream cutElement(s); //문자열 포맷을 parsing할때 사용
	string copy;
	vector<string> v;

	int count = 0;
	while (cutElement>>copy) {  //잘린 단어들이 copy로 들어간다
		v.push_back(copy);
		count++;
	}
	cout << count;



}