//#define _CRT_SECURE_NO_WARNINGS 1
//#include <bits/stdc++.h>
//using namespace std;
//
//void mul(vector<int>& num, int x)
//{
//    int carry = 0;
//    for (int i = 0; i < num.size, i++)
//    {
//        int product = num[i] * x + carry;
//        num[i] = product % 10;
//        carry = product / 10;
//    }
//    while (carry > 0)
//    {
//        num.push_back(carry % 10);
//        carry /= 10;
//    }
//}
//
//void add(vector<int>& a, const vector<int>& b) {
//    int carry = 0;
//    int max_len = max(a.size(), b.size());
//    for (int i = 0; i < max_len || carry; ++i) {
//        if (i < a.size()) carry += a[i];
//        if (i < b.size()) carry += b[i];
//        if (i < a.size()) a[i] = carry % 10;
//        else a.push_back(carry % 10);
//        carry /= 10;
//    }
//}
//
//void add(vector<int>& a, vector<int>& b)
//{
//    int carry = 0;
//    int max_len = max(a.size(), b.size());
//    for (int i = 0; i < max_len || carry > 0, i++)
//    {
//        if (i < a.size()) carry += a[i];
//        if (i < b.size()) carry += b[i];
//        if (i < a.size()) a[i] = carry % 10;
//        else a.push_back(carry % 10);
//        carry /= 10;
//    }
//}
//int main()
//{
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr);
//    int n = 0;
//    while (cin >> n)
//    {
//        vector<int> fact = { 1 };
//        vector<int> sum = { 0 };
//        for (int i = 1; i <= n; i++)
//        {
//            add(sum, fact);
//            mul(fact, i + 1);
//        }
//        for (int i = sum.size() - 1; i >= 0; i--)
//        {
//            cout << sum[i];
//        }
//        cout << '\n';
//    }
//    return 0;
//}