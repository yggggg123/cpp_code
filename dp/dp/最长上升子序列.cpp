#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>
using namespace std;

const int N = 1010;
int a[N];
int dp[N];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n = 0;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}

	int res = 1;
	for (int i = 1; i <= n; i++)
	{
		dp[i] = 1;
		for (int j = 1; j < i; j++)
		{
			if (a[j] < a[i])
			{
				dp[i] = max(dp[j] + 1, dp[i]);
			}
		}
		res = max(dp[i], res);
	}
	cout << res << '\n';
}