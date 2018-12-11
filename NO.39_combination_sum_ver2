class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int> > result;
        vector<int> path;
        dfs(candidates, target, candidates.begin(), result, path);
        return result;
        
    }

    
private:
    void dfs(vector<int> &candidates, 
             int  target, 
             decltype(candidates.begin()) starter, 
             vector<vector<int> >  &result, 
             vector<int> &path){
        
        if(target<0){return;}
        else if( target == 0){
            result.push_back(path);
            
        }else if(target >0){
            
            for(auto i =starter; i!= candidates.end(); ++i){
                path.push_back(*i);
                dfs(candidates, target-(*i), i, result, path);
                path.pop_back();
                
            }
            
            
        }
        
        
        
        
        
        
    }
    
    
    
    
    
};
