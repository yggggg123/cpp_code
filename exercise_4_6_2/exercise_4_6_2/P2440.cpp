#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
vector<int> a(N);
int n, k;

bool check(int& H)
{
	int sum = 0;
	for (int i = 1; i <= n; i++)
	{
		sum += a[i] / H;
	}
	return sum >= k;
}


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin >> n >> k;
	int max_h = 0;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
		max_h = max(max_h, a[i]);
	}
	int l = 0;
	int r = max_h;
	while (l < r)
	{
		int mid = l + (r - l + 1) / 2;
		if (mid == 0)
		{
			l = 0;
			break;
		}
		if (check(mid)) l = mid;
		else r = mid - 1;
	}
	cout << l;
	return 0;
}