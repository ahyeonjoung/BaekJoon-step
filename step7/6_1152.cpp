#include <iostream>
#include <string>
#include<sstream>
#include<vector>
using namespace std;

int main() {
	string s;
	getline(cin,s);
	istringstream cutElement(s); //���ڿ� ������ parsing�Ҷ� ���
	string copy;
	vector<string> v;

	int count = 0;
	while (cutElement>>copy) {  //�߸� �ܾ���� copy�� ����
		v.push_back(copy);
		count++;
	}
	cout << count;



}