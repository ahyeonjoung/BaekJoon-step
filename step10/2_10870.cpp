#include<iostream>
using namespace std;   
   
int fibonacci(int a) {
	if (a == 0) {
		return a;
	}
	else if (a == 1) {
		return 1;
	}
	else {
		return fibonacci(a - 1) + fibonacci(a - 2);
	}
}


int main() {
	int num;
	cin >> num;
	cout << fibonacci(num);

}
