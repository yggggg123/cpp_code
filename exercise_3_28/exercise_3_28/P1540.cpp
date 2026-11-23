//#define _CRT_SECURE_NO_WARNINGS 1
//#include <bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//	int M = 0;
//	int N = 0;
//	int sum = 0;
//	vector<int> v(1005, 0);
//	queue<int> q;
//	cin >> M >> N;
//	for (int i = 0; i < N; i++)
//	{
//		int x = 0;
//		cin >> x;
//		if (v[x] != 1 && q.size() < M)
//		{
//			v[x] = 1;
//			q.push(x);
//			sum++;
//		}
//		else if (v[x] != 1 && q.size == M)
//		{
//			v[q.front()] = 0;
//			q.pop();
//			v[x] = 1;
//			q.push(x);
//			sum++;
//		}
//	}
//	cout << sum;
//	return 0;
//}