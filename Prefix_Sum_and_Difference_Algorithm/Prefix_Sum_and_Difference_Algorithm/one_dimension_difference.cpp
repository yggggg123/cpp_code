#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
int a[N];
int d[N];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
		d[i] = a[i] - a[i - 1];
	}

	while (m--)
	{
		int l, r, val;
		cin >> l >> r >> val;
		d[l] += val;
		d[r + 1] -= val;
	}

	for (int i = 1; i <= n; i++)
	{
		a[i] = a[i - 1] + d[i];
		cout << a[i] << " ";
	}
	return 0;
}