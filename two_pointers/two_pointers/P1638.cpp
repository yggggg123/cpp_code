#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n, m;
	cin >> n >> m;
	vector<int> a(n + 1);
	vector<int> cnt(m + 1, 0);
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	int left = 1;
	int MIN = INT_MAX;
	int x = 0;
	int y = 0;
	int kind = 0;
	for (int right = 1; right <= n; right++)
	{
		if (cnt[a[right]] == 0) kind++;
		cnt[a[right]]++;
		while (kind == m)
		{
			if (right - left + 1 < MIN)
			{
			    x = left;
				y = right;
			}
			cnt[a[left]]--;
			if (cnt[a[left]] == 0) kind--;
			left++;
		}
	}
	cout << x << y << '\n';
}