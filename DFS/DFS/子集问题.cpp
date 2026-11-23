#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>

int n;
vector<int> path;

void dfs(int u)
{
	if (u > n)
	{
		for (int x : path)
		{
			cout << x << " ";
		}
		cout << '\n';
		return;
	}
	dfs(u + 1);
	path.push_back(u);
	dfs(u + 1);
	path.pop_back();
}

int main()
{
	cin >> n;
	dfs(1);
	return 0;
}
