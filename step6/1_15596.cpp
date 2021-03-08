#include<vector>

long long sum(std::vector<int>& a) {
	long long ans = 0;
	int length = a.size();
	for (int i = 0; i < length; i++)
		ans += a[i];
	return ans;
}