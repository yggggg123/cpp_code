#define _CRT_SECURE_NO_WARNINGS 1
int left_bound(int a[], int n, int x)//搜索a[]中大于等于x的最小值
{
	int l = 1;
	int r = n;
	while (l < r)
	{
		int mid = l + (r - l) / 2;
		if (a[mid] >= x) r = mid;
		else l = mid + 1;
	}
	return l;
}

int right_bound(int a[], int n, int x)//搜索a[]中小于等于x的最大值
{
	int l = 1;
	int r = n;
	while (l < r)
	{
		int mid = l + (r - l + 1) / 2;
			if (a[mid] <= x) l = mid;
			else r = mid - 1;
	}
	return l;
}