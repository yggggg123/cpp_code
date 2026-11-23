#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>
using namespace std;

const long long N = 1e8 + 10;
long long t[N];
long long v[N];
long long dp[N];

int main()
{
	long long n, m;
	cin >> m >> n;
	for (long long i = 1; i <= n; i++)
	{
		cin >> t[i] >> v[i];
	}
	for (long long i = 1; i <= n; i++)
	{
		for (long long j = t[i]; j <= m; j++)
		{
			dp[j] = max(dp[j], dp[j - t[i]] + v[i]);
		}
	}
	cout << dp[m] << '\n';
	return 0;
}