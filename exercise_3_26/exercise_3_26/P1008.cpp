//#define _CRT_SECURE_NO_WARNINGS 1
//#include <bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr);
//    for (int a = 1; a <= 3; a++)
//    {
//        for (int b = 1; b <= 9; b++)
//        {
//            for (int c = 1; c <= 9; c++)
//            {
//                int flag = 1;
//                int arr[9] = { 0 };
//                int x1 = 100 * a + 10 * b + c;
//                int x2 = x1 * 2;
//                int x3 = x1 * 3;
//                int d = x2 % 10;
//                int e = (x2 / 10) % 10;
//                int f = x2 / 100;
//                int g = x3 % 10;
//                int h = (x3 / 10) % 10;
//                int i = x3 / 100;
//                if (d == 0 || e == 0 || f == 0 || g == 0 || h == 0 || i == 0)
//                {
//                    flag = 0;
//                }
//                else
//                {
//                    arr[a - 1] = 1;
//                    arr[b - 1] = 1;
//                    arr[c - 1] = 1;
//                    arr[d - 1] = 1;
//                    arr[e - 1] = 1;
//                    arr[f - 1] = 1;
//                    arr[g - 1] = 1;
//                    arr[h - 1] = 1;
//                    arr[i - 1] = 1;
//                }
//                for (int j = 0; j < 9; j++)
//                {
//                    if (arr[j] == 0)
//                    {
//                        flag = 0;
//                        break;
//                    }
//                }
//                if (flag == 1)
//                {
//                    cout << x1 << " " << x2 << " " << x3 << endl;
//                }
//            }
//        }
//    }
//
//    return 0;
//}