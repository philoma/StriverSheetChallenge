#include <bits/stdc++.h>
vector<int> nextPermutation(vector<int> &nums, int n)
{

    int index1 = 0, index2 = 0;
    int i = 0;
    for (i = nums.size() - 2; i >= 0; i--)
    {
        if (nums[i] < nums[i + 1])
        {
            index1 = i;
            break;
        }
    }
    if (i < 0)
    {
        reverse(nums.begin(), nums.end());
    }
    else
    {

        for (int i = nums.size() - 1; i > index1; i--)
        {
            if (nums[i] > nums[index1])
            {
                index2 = i;
                break;
            }
        }
    }
    swap(nums[index1], nums[index2]);
    reverse(nums.begin() + index1 + 1, nums.end());
    return nums;
}#include <bits/stdc++.h>
vector<int> nextPermutation(vector<int> &nums, int n)
{

    int index1 = 0, index2 = 0;
    int i = 0;
    for (i = nums.size() - 2; i >= 0; i--)
    {
        if (nums[i] <nums[i + 1])
        {
            index1 = i;
            break;
        }
    }
    if (i < 0)
    {
        reverse(nums.begin(), nums.end());
        return nums;
    }
    else
    {

        for (int i = nums.size() - 1; i > index1; i--)
        {
            if (nums[i] > nums[index1])
            {
                index2 = i;
                break;
            }
        }
    }
    swap(nums[index1], nums[index2]);
    reverse(nums.begin() + index1 + 1, nums.end());
    return nums;
}