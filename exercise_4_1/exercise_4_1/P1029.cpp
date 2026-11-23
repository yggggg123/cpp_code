//#include <bits/stdc++.h>
//using namespace std;
//
//int gcd(int a, int b)
//{
//	while (b)
//	{
//		int tem = a;
//		a = b;
//		b = tem % b;
//	}
//	return a;
//}
//int main()
//{
//	int x0 = 0;
//	int y0 = 0;
//	int sum = 0;
//	cin >> x0 >> y0;
//	if (y0 % x0 == 0)
//	{
//		int k = y0 / x0;
//		for (int a = 1; a <= k; a++)
//		{
//			for (int b = 1; b <= k; b++)
//			{
//				if (a * b == k && gcd(a, b) == 1)
//				{
//					sum++;
//				}
//			}
//		}
//	}
//	cout << sum;
//	return 0;
//}