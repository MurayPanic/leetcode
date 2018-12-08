class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> result{-1,-1};
        if (nums.size()==0) {return result;}
        if(target < *nums.begin() | target > *(nums.end()-1) ){ 
            //cout<<"beginner activated"<<endl;
            return result;}
        int left = 0;
        int right = nums.size();
        
        while(left<right){
            int mid = (left+right)/2;
            
            
            if(nums[mid]<target){
                left  = mid +1;
            }else if(nums[mid]>target){
                right = mid;
            }else{
                //cout<<"i am entered"<<endl;
                for (auto i = mid; i>=left;--i){
                    if (i==0|nums[i]!= nums[i-1]){ 
                       // cout<<"i activated"<<endl;
                        *result.begin() = i;
                        break;}
                    
                }
                
                for (auto j = mid; j<= right; ++j){
                    if (j== (nums.size()-1)|nums[j]!= nums[j+1]){
                        //cout<<"j activated"<<endl;
                        *(result.end()-1) = j;
                        break;}
                }
                
                return result;
                    
                }
            }
        
       
        
        return result;
    }
};
