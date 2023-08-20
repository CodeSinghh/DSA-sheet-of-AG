#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void findCombinations(vector<int> &nums, int target, int start, vector<int> &current, vector<vector<int>> &result)
{
    if (target == 0)
    {
        result.push_back(current);
        return;
    }

    for (int i = start; i < nums.size(); ++i)
    {
        if (i > start && nums[i] == nums[i - 1])
        {
            continue; // Skip duplicates
        }

        if (nums[i] <= target)
        {
            current.push_back(nums[i]);
            findCombinations(nums, target - nums[i], i + 1, current, result);
            current.pop_back();
        }
    }
}

vector<vector<int>> getCombinations(vector<int> &nums, int target)
{
    vector<vector<int>> result;
    vector<int> current;
    sort(nums.begin(), nums.end()); // Sort the input array to handle duplicates
    findCombinations(nums, target, 0, current, result);
    return result;
}

int main()
{
    vector<int> nums = {10, 1, 2, 7, 6, 1, 5};
    int target = 8;

    vector<vector<int>> result = getCombinations(nums, target);

    for (const vector<int> &combination : result)
    {
        for (int num : combination)
        {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
