class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            unordered_map<int,int>mpp;
            vector<int>res;
            int n = nums.size();
            
            for(int i = 0; i<n; i++){
                if(mpp.find(target - nums[i]) != mpp.end()){
                    res.push_back(i);
                    res.push_back(mpp[target - nums[i]]);
                    return res;
                }
                mpp[nums[i]] = i;
            }
            return res;
        }
    };