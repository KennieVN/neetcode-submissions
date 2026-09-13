
class Solution{
public:
    vector<int>twoSum(vector<int>& nums, int target){
    for(int i = 0; i <nums.size();i++){
        int diff = target - nums[i];
        for (int o = i + 1; o < nums.size(); o++){
            if (diff == nums[o]) {
                return {i,o};

            }
        }
    }
    return {};
    }
};
