//https://leetcode.com/problems/running-sum-of-1d-array/
class Solution
{
public:
    vector<int> runningSum(vector<int> &nums)
    {
        vector<int> running_sum;
        int sum = 0, i;
        for (i = 0; i < nums.size(); i++)
        {
            sum += nums[i];
            running_sum.push_back(sum);
        }
        //                  OR
        // for(auto i=nums.begin(); i!=nums.end(); i++){
        //     sum += *i;
        //     running_sum.push_back(sum);
        // }
        return running_sum;
    }
};