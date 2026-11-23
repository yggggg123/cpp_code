#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 10;
int a[N];
long long n, m;

bool check(int& H)
{
	long long sum = 0;
	for (int i = 1; i <= n; i++)
	{
		if (a[i] > H)
		{
			sum += a[i] - H;
		}
	}
	return sum >= m;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int max_h = 0;
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
		max_h = max(a[i], max_h);
	}

	int l = 0;
	int r = max_h;
	while (l < r)
	{
		int mid = l + (r - l + 1) / 2;
		if (check(mid)) l = mid;
		else r = mid - 1;
	}
	cout << l << '\n';
	return 0;
}