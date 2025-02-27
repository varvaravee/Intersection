class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        unordered_map<int, int>Map;
        vector<int>ans;
        int n=nums.size();

        for (int i=0; i<n ; i++) {
            for (int j=0; j<nums[i].size() ; j++) {
                Map[nums[i][j]]++;
                if (i==n-1 && Map[nums[i][j]==n)
                    ans.push_back(nums[i][j]);
            }
        }

        sort (ans.begin(), ans.end());
        return ans;
    }
};
