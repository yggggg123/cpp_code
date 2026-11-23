//#define _CRT_SECURE_NO_WARNINGS 1
//#include <bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//	string s;
//	while (cin >> s)
//	{
//		bool flag = true;
//		stack<char> st;
//		for (char c : s)
//		{
//			if (c == '(')
//			{
//				st.push(c);
//			}
//			if (c == ')')
//			{
//				if (st.empty())
//				{
//					flag = false;
//				}
//				else 
//				{
//					st.pop();
//				}
//			}
//		}
//		if (!st.empty())
//		{
//			flag = false;
//		}
//		if (flag)
//		{
//			cout << "YES";
//		}
//		else
//		{
//			cout << "NO";
//		}
//	}
//	return 0;
//}