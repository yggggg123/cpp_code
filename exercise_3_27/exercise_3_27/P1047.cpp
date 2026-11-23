//#define _CRT_SECURE_NO_WARNINGS 1
//#include <bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//	long long len = 0;
//	int m = 0;
//	while (cin >> len >> m)
//	{
//		long long sum = 0;
//		vector<vector<long long>> reg(m, vector<long long>(2, 0));
//		vector<int> rem(len + 1, 0);
//		for (int i = 0; i < m; i++)
//		{
//			cin >> reg[i][0] >> reg[i][1];
//			cin.ignore();
//		}
//		for (int i = 0; i < m; i++)
//		{
//			for (int j = reg[i][0]; j <= reg[i][1]; j++)
//			{
//				rem[j] = 1;
//			}
//		}
//		for (int i = 0; i < len + 1; i++)
//		{
//			if (rem[i])
//			{
//				sum++;
//			}
//		}
//		cout << len + 1 - sum << '\n';
//	}
//	return 0;
//}