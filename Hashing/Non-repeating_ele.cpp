class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int i = 0; i < nums.size(); i++){
            mp[nums[i]]++;
        }
        for(int i = 0; i < nums.size(); i++){
            auto temp = mp.find(nums[i]);
            if(temp -> second == 1){
                return nums[i];
            }
        }
        return 0;
    }
};