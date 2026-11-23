#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int M;
	cin >> M;
	int left = 1;
	int right = 2;
	int sum = 3;
	while (left <= M / 2)
	{
		if (sum == M)
		{
			cout << left << " " << right << '\n';
			sum -= left;
			left++;
		}
		else if (sum < M)
		{
			right++;
			sum += right;
		}
		else
		{
			sum -= left;
			left++;
		}
	}
	return 0;
}