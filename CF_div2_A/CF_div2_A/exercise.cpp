//#define _CRT_SECURE_NO_WARNINGS 1
//#include <bits/stdc++.h>
//using namespace std;
//
//bool isleapyear(int year)
//{
//	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) return true;
//	else return false;
//}
//
//bool iscuteday(int year, int month, int day)
//{
//	vector<int> cons(10);
//	while (year)
//	{
//		cons[year % 10]++;
//		year /= 10;
//	}
//	while (month)
//	{
//		cons[month % 10]++;
//		month /= 10;
//	}
//	while (day)
//	{
//		cons[day % 10]++;
//		day /= 10;
//	}
//	int x = 0;
//	for (int b : cons)
//	{
//		if (x == 0 && b != 0) x = b;
//		if (b == 0) continue;
//		else if(x != b) return false;
//	}
//	return true;
//}
//
//int main()
//{
//	vector<int> day1 = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//	vector<int> day2 = { 0,31,29,31,30,31,30,31,31,30,31,30,31 };
//	int sum = 0;
//	for (int year = 2239; year <= 9876; year++)
//	{
//		for (int month = 1; month <= 12; month++)
//		{
//			if (isleapyear(year))
//			{
//				for (int day = 1; day <= day2[month]; day++)
//				{
//					if (year == 2239) {
//						if (month < 9) continue;
//						if (month == 9 && day < 9) continue;
//					}
//					if (year == 9876) {
//						if (month > 1) continue;
//						if (month == 1 && day > 1) continue;
//					}
//					if (iscuteday(year, month, day)) sum++;
//				}
//			}
//			else
//			{
//				for (int day = 1; day <= day1[month]; day++)
//				{
//					if (year == 2239) {
//						if (month < 9) continue;
//						if (month == 9 && day < 9) continue;
//					}
//					if (year == 9876) {
//						if (month > 1) continue;
//						if (month == 1 && day > 1) continue;
//					}
//					if (iscuteday(year, month, day)) sum++;
//				}
//			}
//		}
//	}
//	cout << sum << '\n';
//	return 0;
//}