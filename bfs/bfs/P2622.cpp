#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>
using namespace std;

const int N = 11;
const int M = 105;
int n, m;
int op[M][N];
int dist[1 << N];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	cin >> n >> m;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> op[i][j];
		}
	}
	memset(dist, -1, sizeof dist);
	queue<int> q;
	int start = (1 << n) - 1;
	dist[start] = 0;
	q.push(start);

	while (!q.empty())
	{
		auto a = q.front();
		q.pop();
		if (a == 0)
		{
			cout << dist[a] << '\n';
			return 0;
		}
		for (int i = 0; i < m; i++)
		{
			int na = a;
			for (int j = 0; j < n; j++)
			{
				if (op[i][j] == 1) na |= (1 << j);
				else if (op[i][j] == -1) na &= ~(1 << j);
			}
			if (dist[na] == -1) 
			{
				dist[na] = dist[a] + 1;
				q.push(na);
			}
		}
	}
	cout << -1 << '\n';
	return 0;
}
