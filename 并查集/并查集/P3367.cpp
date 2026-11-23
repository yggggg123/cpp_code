#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>
using namespace std;

const int N = 1e5;
int p[N];

int find(int x)
{
	return p[x] == x ? x : p[x] = find(p[x]);
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) p[i] = i;
	while (m--)
	{
		int z, x, y = 0;
		cin >> z >> x >> y;
		if (z == 1)
		{
			p[find(x)] = find(y);
		}
		else
		{
			cout << (find(x) == find(y) ? "Y" : "N" << '\n';
		}
	}
	return 0;
}