class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        map<int, int> m;
        
        for (vector<int>::iterator left = nums.begin(); left != nums.end(); left++) {
            map<int,int>::iterator it = m.find(target - *left);
            if (it != m.end()) {
                res.push_back(left - nums.begin());
                res.push_back(it->second);
                return res;
            } else {
                m[*left] = left - nums.begin();
            }
        }
        
        return res;
    }
};