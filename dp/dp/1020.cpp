#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	vector<int> h;
	int x;
	while (cin >> x)
	{
		h.push_back(x);
	}
	int n = h.size();
	vector<int> q1;
	for (int num : h)
	{
		auto it = upper_bound(q1.begin(), q1.end(), num, greater<int>());
		if (it == q1.end())
		{
			q1.push_back(num);
		}
		else
		{
			*it = num;
		}
	}
	int ans1 = q1.size();


	vector<int> q2;
	for (int num : h)
	{
		auto it = lower_bound(q2.begin(), q2.end(), num);
		if (it == q2.end())
		{
			q2.push_back(num);
		}
		else
		{
			*it = num;
		}
	}
	int ans2 = q2.size();
	cout << ans1 << " " << ans2;
	return 0;
}