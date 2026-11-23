#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>
using namespace std;

long long qpow(long long a, long long b, long long p)
{
	long long res = 1;
	a %= p;
	while (b)
	{
		if (b % 2 == 1)
		{
			res = (res * a) % p;
		}
		a = (a * a) % p;
		b /= 2;
	}
	return res;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	long long a, b, p;
	cin >> a >> b >> p;
	cout << a << "^" << b << " mod " << p << "=" << qpow(a,b,p);
	return 0;
}