//#define _CRT_SECURE_NO_WARNINGS 1
//#include <bits/stdc++.h>
//using namespace std;
//
//const int N = 1e5 + 5
//int main()
//{
//	int nn = 0;
//	cin >> nn;
//	vector<vector<int>> map(N, vector<int>(N,-1));
//	for (int i = 1; i <= nn; i++)
//	{
//		int a, b, g, k;
//		cin >> a >> b >> g >> k;
//		for (int m = a; m <= a + g; m++)
//		{
//			for (int n = b; n <= b + k; n++)
//			{
//				map[m][n] = i;
//			}
//		}
//	}
//	int x, y;
//	cin >> x >> y;
//	cout << map[x][y];
//	return 0;
//}
//MLEÁË
// 
// 
// 
// 
// 
// 
// 
// 
//#include <bits/stdc++.h>
//using namespace std;
//
//struct Carpet
//{
//	int a, b, g, k;
//};
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//	int n;
//	cin >> n;
//	vector<Carpet> c(n + 1);
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> c[i].a >> c[i].b >> c[i].g >> c[i].k;
//	}
//	int x, y;
//	cin >> x >> y;
//	int ans = -1;
//	for (int i = n; i >= 1; i--)
//	{
//		if (x >= c[i].a && x <= c[i].a + c[i].g && y >= c[i].b && y <= c[i].b + c[i].k) {
//			ans = i;
//			break;
//		}
//	}
//	cout << ans;
//	return 0;
//}