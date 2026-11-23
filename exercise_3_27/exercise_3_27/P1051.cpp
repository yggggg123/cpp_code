//#define _CRT_SECURE_NO_WARNINGS 1
//#include <bits/stdc++.h>
//using namespace std;
//
//struct Grade
//{
//	string name;
//	int final_grade;
//	int class_grade;
//	char officer;
//	char east;
//	int publish;
//	int sum = 0;
//	int index;
//};
//
//bool cmp_sum(const Grade& a, const Grade& b)
//{
//	if (a.sum != b.sum) return a.sum > b.sum;
//	return a.index < b.index;
//}
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//	int N = 0;
//	while (cin >> N)
//	{
//		vector<Grade> list(N);
//		for (int i = 0; i < N; i++)
//		{
//			cin >> list[i].name >> list[i].final_grade >> list[i].class_grade >> list[i].officer >> list[i].east >> list[i].publish;
//			cin.ignore();
//			list[i].index = i;
//		}
//		for (int i = 0; i < N; i++)
//		{
//			if (list[i].final_grade > 80 && list[i].publish > 0) list[i].sum += 8000;
//			if (list[i].final_grade > 85 && list[i].class_grade > 80) list[i].sum += 4000;
//			if (list[i].final_grade > 90) list[i].sum += 2000;
//			if (list[i].final_grade > 85 && 'Y' == list[i].east) list[i].sum += 1000;
//			if (list[i].class_grade > 80 && 'Y' == list[i].officer) list[i].sum += 850;
//		}
//		long long Sum = 0;
//		for (int i = 0; i < N; i++)
//		{
//			Sum += list[i].sum;
//		}
//		sort(list.begin(), list.end(), cmp_sum);
//		cout << list[0].name << '\n' << list[0].sum << '\n' << Sum;
//	}
//	return 0;
//}