#include<iostream>
using namespace std;
   
int factorial(int a) {
	if (a == 1) {
		return a;
	}
	else {
		return a * factorial(a - 1);
	}
	
}

int main() {
	int num;
	cin >> num;
	if (num == 0)
		cout << 1;
	else {
		int result=factorial(num);
		cout << result;
	}

}
