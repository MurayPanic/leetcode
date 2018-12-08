class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> result{-1,-1};
        auto search = equal_range(nums.begin(), nums.end(), target);
        
        if (search.first== search.second){return result;}
        
        int left= search.first-nums.begin();
        int right = search.second- nums.begin()-1;
       
        *result.begin()=left;
        *(result.end()-1)=(right);
        return result;
        
    }
};
