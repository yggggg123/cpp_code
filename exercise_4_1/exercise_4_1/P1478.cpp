//#include <bits/stdc++.h>
//using namespace std;
//
//bool cmp(pair<int, int> m, pair<int, int> n)
//{
//	return m.second < n.second;
//}
//int main()
//{
//	int n = 0;
//	int s = 0;
//	int a = 0;
//	int b = 0;
//	cin >> n >> s >> a >> b;
//	int d = 0;
//	vector<pair<int, int>> v;
//	for (int i = 0; i < n; i++)
//	{
//		int x = 0;
//		int y = 0;
//		cin >> x >> y;
//		if (x <= a + b) v.emplace_back(x, y);
//	}
//	sort(v.begin(), v.end(), cmp);
//	auto it = v.begin();
//	while (s >= 0 && it != v.end())
//	{
//		s -= it->second;
//		it++;
//		d++;
//	}
//	if (s >= 0) cout << d;
//	else cout << d - 1;
//	return 0;
//}