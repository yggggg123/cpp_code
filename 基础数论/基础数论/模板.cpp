#define _CRT_SECURE_NO_WARNINGS 1
//最大公约数
long long gcd(long long a, long long b)
{
	return b ? gcd(b, a % b) : a;
}
//快速幂取模
long long qpow(long long a,long long b,long long p)
{
	long long res = 1;
	a %= p;
	while (b)
	{
		if (b % 2 == 1) res *= a % p;
		a = (a * a) % p;
		b /= 2;
	}
	return res;
}

//埃氏筛法
const int N = 1e6 + 10;
vector<bool> is_prime(N,true);

void sieve(int n)
{
	is_prime[0] = 0;
	is_prime[1] = 0;
	for (int i = 2; i <= n; i++)
	{
		if (is_prime[i])
		{
			for (int j = i * i; j <= n; j +=i)
			{
				is_prime[j] = 0;
			}
		}
	}
}