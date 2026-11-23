#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>
using namespace std;

const int N = 1010;
int a[N][N];
int dp[N];

int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cin >> a[i][j];
		}
	}
	dp[1] = a[1][1];
	for (int i = 2; i <= n; i++)
	{
		for (int j = i; j >= 1; j--)		
		{
			dp[j] = max(dp[j], dp[j - 1]) + a[i][j];
		}
	}
	cout << dp[n] << '\n';
}