//#define _CRT_SECURE_NO_WARNINGS 1
//include <bits / stdc++.h>
//using namespace std;
//
//struct act
//{
//	int s, e;
//	bool operator<(const act& b) const
//	{
//		e < b.e;
//	}
//};
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//	int n = 0;
//	cin >> n;
//	vector<act> acts;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> acts[i].s >> acts[i].e;
//	}
//  sort(acts.begin(), acts.end());
//	int last = -2e10;
//	int ans = 0;
//	for (auto& a : acts)
//	{
//		if (a.s >= last)
//		{
//			ans++;
//			last = a.e;
//		}
//	}
//	cout << ans << '\n';
//	return 0;
//}