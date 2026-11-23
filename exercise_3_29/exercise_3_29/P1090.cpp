//#define _CRT_SECURE_NO_WARNINGS 1
//#include <bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//	int n = 0;
//	priority_queue<int,vector<int>, greater<int> > pq;
//	cin >> n;
//	int sum = 0;
//	for (int i = 0; i < n; i++)
//	{
//		int j = 0;
//		cin >> j;
//		pq.push(j);
//	}
//	while (pq.size() > 1)
//	{
//		int N = 0;
//		int a = pq.top();
//		pq.pop();
//		int b = pq.top();
//		pq.pop();
//		N = a + b;
//		pq.push(N);
//		sum += N;
//	}
//	cout << sum;
//	return 0;
//}