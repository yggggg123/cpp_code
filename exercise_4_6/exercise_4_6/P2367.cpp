//#define _CRT_SECURE_NO_WARNINGS 1
//#include <bits/stdc++.h>
//using namespace std;
//
//const int N = 5e6 + 10;
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//	vector<int> a(N, 0);
//	vector<int> d(N, 0);
//	int n, p;
//	cin >> n >> p;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> a[i];
//		d[i] = a[i] - a[i - 1];
//	}
//	while (p--)
//	{
//		int x, y, val;
//		cin >> x >> y >> val;
//		d[x] += val;
//		d[y + 1] -= val;
//	}
//	int min = 100;
//	for (int i = 1; i <= n; i++)
//	{
//		a[i] = a[i - 1] + d[i];
//		if (a[i] < min)
//		{
//			min = a[i];
//		}
//	}
//	cout << min;
//	return 0;
//}