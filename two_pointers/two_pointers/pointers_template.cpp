#define _CRT_SECURE_NO_WARNINGS 1
//相向双指针
int l = 0;
int r = n - 1;
while (l < r)
{
	if () l++;
	else if () r--;
	else break;
}
//同向双指针
int slow = 0;
for (int fast = 0; fast < n; fast++)
{
	if ()
	{
		slow++;
		//
	}
}
//定长滑动窗口
int sum = 0;
for (int i = 0; i < k; i++) sum += num[i];
int res = sum;
for (int right = k; right < n; right++)
{
	sum -= num[right - k];
	sum += num[right];
	res = max(res, sum);
}

//变长滑动窗口(最长)
int left = 0;
int res = 0;
unordered_map<int, int> cnt;
for (int right = 0; right < n; right++)
{
	cnt[num[right]]++;
	while ()//不满足窗口条件
	{
		cnt[num[left]]--;
		left++;
	}

	res = max(right - left + 1, res);
}
//(最短)
int left = 0;
int res = INT_MAX;
unordered_map <int, int> cnt;

for (int right = 0; right < n; right++)
{
	cnt[num[right]]++;
	while ()//满足窗口条件
	{
		res = min(res, right - left + 1);
		cnt[num[left]]--;
		left++;
	}
}