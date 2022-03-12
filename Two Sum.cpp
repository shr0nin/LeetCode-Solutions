class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<pair<int,int>> a;
        for(int i=0; i<n; ++i) {
            a.push_back({nums[i], i});
        }
        sort(a.begin(), a.end());
        int l=0, r=n-1;
        while(l<r) {
            if(a[l].first+a[r].first<target) ++l;
            else if(a[l].first+a[r].first>target) --r;
            else break;
        }
        return {a[l].second, a[r].second};
    }
};
