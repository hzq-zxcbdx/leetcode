#include "Hash.h"

// leetcode-242
bool Solution_hash::isAnagram(string s, string t)
{
    // 一定要初始化哈系表数组内所有元素都为0，不然可能会出现错误
    int hash[26] = {0};
    // for (int i = 0; i < 26; i++)
    // {
    //     hash[i] = 0;
    // }
    for (int i = 0; i < s.size(); i++)
    {
        hash[s[i] - 'a']++;
    }
    for (int i = 0; i < t.size(); i++)
    {
        hash[t[i] - 'a']--;
    }
    for (int i = 0; i < 26; i++)
    {
        if (hash[i] != 0)
        {
            return false;
        }
    }
    return true;
}

vector<int> Solution_hash::intersection(vector<int> &nums1, vector<int> &nums2)
{
    unordered_set<int> result_set;
    unordered_set<int> nums_set(nums1.begin(), nums1.end());
    for (int num : nums2)
    {
        if (nums_set.find(num) != nums_set.end())
        {
            result_set.insert(num);
        }
    }
    return vector<int>(result_set.begin(), result_set.end());
}