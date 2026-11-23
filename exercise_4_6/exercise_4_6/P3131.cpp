#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
struct m
{
	int yu = 0;
	int id = 0;
	bool operator<(const m& b) const
	{
		if (yu != b.yu) return yu < b.yu;
		else return id < b.id;
	}
};

int main()
{
	int n;
	cin >> n;
	vector<int> a(N, 0);
	vector<m> s(N);
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
		s[i].yu = (s[i - 1].yu + a[i]) % 7;
		s[i].id = i;
	}
	int left = s[1].id;
	int len = 0;
	int maxl = 0;
	sort(s.begin(), s.begin() +);
	for (int i = 1; i <= n - 1; i++)
	{
		if (s[i].yu != s[i + 1].yu)
		{
			len = s[i].id - left + 1;
			left = s[i + 1].id;
			maxl = len > maxl ? len : maxl;
		}
		else if (i + 1 == n)
		{
			len = s[i + 1].id - left + 1;
			maxl = len > maxl ? len : maxl;
		}
	}
	cout << maxl;
	return 0;
}