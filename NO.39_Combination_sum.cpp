class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int> > result;
        vector<int> comb;
        dfs(candidates, target, candidates.begin(), result, comb);
        return result;
        
    }

    
private:
    void dfs(vector<int> &candidates, 
             int  target, 
             decltype(candidates.begin()) starter, 
             vector<vector<int> >  &result, 
             vector<int> &comb){
        
        for(auto i = starter; i !=candidates.end(); ++i){
            
            if(*i > target){
                return;}
            else if(*i == target ){
                comb.push_back(*i);
                result.push_back(comb);
                comb.pop_back();
                
            }else if(*i <target){
                comb.push_back(*i);
                dfs(candidates, target-*i, i, result, comb);
                comb.pop_back();
                
            }
            
        }
        
        
        
        
        
        
    }
    
    
    
    
    
};
