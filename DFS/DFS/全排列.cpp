#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>
using namespace std;

const int N = 10;
int n;
vector<int> path;
bool used[N];

void dfs(int u)
{
	if (u == n)
	{
		for (int x : path)
		{
			cout << x << " ";
		}
		cout << '\n';
		return;
	}
	for (int i = 1; i <= n; i++)
	{
		if (!used[i])
		{
			used[i] = true;
			path.push_back(i);
			dfs(u + 1);
			used[i] = false;
			path.pop_back();
		}
	}
}

int main()
{
	cin >> n;
	dfs(0);
	return 0;
}