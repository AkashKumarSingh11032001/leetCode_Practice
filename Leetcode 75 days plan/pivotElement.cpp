#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int pivotIndex(vector<int> &nums)
    {

        int sum = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            sum += nums[i];
        }

        int prefixSum = 0;
        int index = -1;

        for (int i = 0; i < nums.size(); i++)
        {
            int rightHandSum = sum - prefixSum - nums[i];
            if (prefixSum == rightHandSum)
            {
                index = i;
                break;
            }
            prefixSum += nums[i];
        }
        return index;
    }
};