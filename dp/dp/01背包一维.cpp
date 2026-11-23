#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>
using namespace std;

const int N = 1010;
int dp[N];
int w[N];
int v[N];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
    {
		cin >> w[i] >> v[i];
	}
	for (int i = 1; i <= n; i++)
	{
		for (int j = m; j >= w[i]; j--)
		{
			dp[j] = max(d[j], d[j - w[i]] + v[i]);
		}
	}
	cout << d[m] << '\n';
	return 0;
}