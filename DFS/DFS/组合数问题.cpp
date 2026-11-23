#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>
using namespace std;

int n, k;
vector<int> path;

void dfs(int u, int start)
{
	if (u == k)
	{
		for (int x : path)
		{
			cout << x << " ";
		}
		cout << '\n';
		return;
	}
	for (int i = start; i <= n; i++)
	{
		path.push_back(i);
		dfs(u + 1, i + 1);
		path.pop_back();
	}
}

int main()
{
	cin >> n >> k;
	dfs(0, 1);
	return 0;
}