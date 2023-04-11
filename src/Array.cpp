#include "Array.h"

int Solution_array::removeDuplicates(vector<int> &nums)
{
    int n = nums.size();
    int fast = 1, slow = 1;
    if (n == 0)
    {
        return 0;
    }
    while (fast < n)
    {
        if (nums[fast] != nums[fast - 1])
        {
            nums[slow] = nums[fast];
            slow++;
        }
        fast++;
    }
    return slow;
}

int Solution_array::removeElement(vector<int> &nums, int val)
{
    int n = nums.size();
    int nsize = 0;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] != val)
        {
            nums[nsize] = nums[i];
            nsize++;
        }
    }
    return nsize;
}

vector<int> Solution_array::twoSum(vector<int> &numbers, int target)
{
    int n = numbers.size();
    int left = 0;
    int right = n - 1;
    vector<int> res;
    while (numbers[left] + numbers[right] != target)
    {
        if (numbers[left] + numbers[right] < target)
        {
            left++;
        }
        else
        {
            right--;
        }
    }
    res.push_back(left + 1);
    res.push_back(right + 1);

    return res;
}

string Solution_array::longestPalindrome(string s)
{
    string out;

    for (int i = 0; i < s.length(); i++)
    {
        string str1 = palindrome(s, i, i);
        string str2 = palindrome(s, i, i + 1);
        if (str1.length() > out.length())
        {
            out = str1;
        }
        if (str2.length() > out.length())
        {
            out = str2;
        }
    }
    return out;
}