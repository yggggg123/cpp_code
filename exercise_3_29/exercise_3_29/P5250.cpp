//#define _CRT_SECURE_NO_WARNINGS 1
//#include <bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//	int m = 0;
//	set<int> len;
//	cin >> m;
//	for (int i = 0; i < m; i++)
//	{
//		int op = 0;
//		cin >> op;
//		if (op == 1)
//		{
//			int x;
//			cin >> x;
//			if (len.find(x) == len.end())
//			{
//				len.insert(x);
//			}
//			else
//			{
//				cout << "Already Exist"<<'\n';
//			}
//		}
//		else if(op == 2)
//        {
//			int x;
//			cin >> x;
//			if (!len.empty())
//			{
//				if (len.find(x) == len.end())
//				{
//					auto it = len.lower_bound(x);
//					if (it == len.begin())
//					{
//						cout << *it << '\n';
//						len.erase(*it);
//					}
//					else if (it == len.end())
//					{
//						cout << *prev(it) << '\n';
//						len.erase(*prev(it));
//					}
//					else if ((x - *prev(it)) > (*it - x))
//					{
//						cout << *it << '\n';
//						len.erase(*it);
//					}
//					else
//					{
//						cout << *prev(it) << '\n';
//						len.erase(*prev(it));
//					}
//				}
//				else
//				{
//					cout << x << '\n';
//					len.erase(x);
//				}
//			}
//			else
//			{
//				cout << "Empty" << '\n';
//			}
//		}
//	}
//	return 0;
//}