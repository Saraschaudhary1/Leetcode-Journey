#include <bits/stdc++.h>
using namespace std;

int concatenate(int a, int b)
{
    int result = max(a, b);
    int digit = 0;
    while (result > 0)
    {
        digit++;
        result /= 10;
    }
    return (a * pow(10, digit) + b);
}

int minMergedInteger(vector<int> &nums)
{
    int current;
    int min_num = concatenate(nums[0], nums[1]);

    for (int i = 1; i < nums.size() - 1; i++)
    {
        current = concatenate(nums[i], nums[i + 1]);
        min_num = min(current, min_num);
    }

    return min_num;
}

int main()
{

    return 0;
}