#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>
using namespace std;

const int N = 1010;
int t[N];
int v[N];
int dp[N];

int main()
{
	int n, m;
	cin >> m >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> t[i] >> v[i];
	}
	for (int i = 1; i <= n; i++)
    {
		for (int j = m; j >= t[i]; j--)
		{
			dp[j] = max(dp[j], dp[j - t[i]] + v[i]);
		}
	}
	cout << dp[m] << '\n';
	return 0;
}