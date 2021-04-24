#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> num;
	vector<int> great;
	int arr[8001] = {0};
	int temp;
	int sum = 0;
	int max = 0;

	for (int i = 0; i < n; i++) {
		cin >> temp;
		sum += temp;
		if (temp < 0)
			arr[-temp + 4000]++;
		else
			arr[temp]++;
		num.push_back(temp);
	}
	sort(num.begin(), num.end());
	if (round((double)sum / n) == -0) {
		cout<<0<<"\n";
	}
	else {
		int mean= round((double)sum / n) ;
		cout << mean << "\n";
	}

	cout << num[num.size()/2]<<"\n";

	for (int i = 0; i < 8001; i++) {
		if (max <= arr[i]) {
			max = arr[i];
		}		
	}

	for (int i = 0; i < 8001; i++) {
		if (arr[i] == max) {
			if (i>=4000)
				great.push_back(-(i-4000));
			else
				great.push_back(i);
		}
	}
	sort(great.begin(),great.end());
	if (n == 1)
		cout << temp << "\n";
	else if (great.size() == 1)
		cout << great[0] << "\n";
	else
		cout << great[1] << "\n";

	if (n == 1) {
		cout << 0;
	}
	else
		cout << num.back()-num.front();


	
}