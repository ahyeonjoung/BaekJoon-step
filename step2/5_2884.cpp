#include <iostream>
using namespace std;

int main(){
	int h, m = 0;
	cin >> h >> m;
	if (m < 45)
		if (h == 0)
			cout << 23 << " "<<m + 60 - 45;
		else
			cout << h - 1 <<" "<< m + 60 - 45;
	else
		cout << h <<" "<< m - 45;

}