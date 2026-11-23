//#define _CRT_SECURE_NO_WARNINGS 1
//#include <bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(false);
//	int N;
//	cin >> N;
//	int sum = 0;
//	int num = 0;
//	vector<int> v(N);
//	for (int i = 0; i < N; i++)
//	{
//		cin >> v[i];
//		sum += v[i];
//	}
//	int avg = sum / N;
//	for (int i = 0; i < N - 1; i++)
//	{
//		if (v[i] != avg)
//		{
//			v[i + 1] += v[i] - avg;
//			num++;
//		}
//	}
//	cout << num;
//	return 0;
//}