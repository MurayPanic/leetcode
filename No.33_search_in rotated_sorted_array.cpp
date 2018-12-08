class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        int result{-1};
        if (nums.size()==0){return result;}
        int head_dst = target - *nums.begin();
        int tail_dst = target - *(nums.end()-1);
        if(head_dst<=tail_dst) {
            int index = 0;
            for(auto i = nums.begin(); i!= nums.end(); ++i){
                if (*i== target){ 
                    result = index;
                    return result;} 
                ++index;
            }
        }else{
             int index = nums.size()-1;
            for(auto i = nums.rbegin(); i!= nums.rend(); ++i){
                if (*i== target){ 
                    result = index;
                    return result;}
                --index;
        }
        
    }
        return result;
    }
};
