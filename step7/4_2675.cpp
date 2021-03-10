#include <iostream>
#include<vector>
using namespace std;

int main() {
	int t = 0;
	cin >> t;
	int* num = new int[t];
	string* str = new string[t];
	vector<char>v;

	for (int i = 0; i < t; i++) {
		cin >> num[i]>>str[i];
	}

	for (int i = 0; i < t; i++) {
		for (int j = 0; j < str[i].length(); j++) 
			for(int t=0;t<num[i];t++)
				v.push_back(str[i][j]);
		
		for (int j = 0; j < num[i]*str[i].length(); j++) {
			cout << v[j];
			
		}
		v.clear();
		if(i!=t-1)
			cout << endl;
	}
}