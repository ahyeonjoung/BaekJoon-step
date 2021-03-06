#include <iostream>
#include <algorithm>
using namespace std;
int Max(int* t,int len);
int Min(int* t, int len);

 int Max(int *t,int len){
	int temp = t[0];
	for (int k = 1; k < len;k ++) {
		if (temp < t[k])
			temp = t[k];
	}
	return temp;

}
 int Min(int* t, int len) {
	 int temp = t[0];
	 for (int k = 1; k < len; k++) {
		 if (temp > t[k])
			 temp = t[k];
	 }
	 return temp;

 }

int main() {
	int n = 0;
	cin >> n;
	int* p = new int[n];
	for (int i = 0; i < n; i++) {
		cin.tie(NULL);
		cin >> p[i];
	}
		
	int max = Max(p,n);
	int min = Min(p, n);
	cout <<min<<" "<< max;
	delete[] p;
	
	
}