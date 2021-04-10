// Combination Sum II

// Given a collection of candidate numbers (candidates) and a target number (target), 
// find all unique combinations in candidates where the candidate numbers sum to target.
// Each number in candidates may only be used once in the combination.

// Note: The solution set must not contain duplicate combinations.

class Solution {
public:
    int dp[101][31];
    int ar[101][31];
    vector<vector<int>> solve(int trg,int n,vector<int>& candidates){
        vector<vector<int>> ans;
        if(trg==0)
            return ans;
        set<int> s;
        for(int i=n;i>=1;i--){
            if(ar[i][trg]==1 && s.count(candidates[i-1])==0){
                s.insert(candidates[i-1]);
                if(candidates[i-1]==trg)
                    ans.push_back({candidates[i-1]});
                else{
                    vector<vector<int>> tmp = solve(trg-candidates[i-1],i-1,candidates);
                    for(auto j:tmp){
                        j.push_back(candidates[i-1]);
                        ans.push_back(j);
                    }
                }                
            }            
        }
        return ans;
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        int n=candidates.size();        
        for(int i=1;i<=target;i++){
            dp[0][i]=0;
            ar[0][i]=0;
        }
        for(int i=0;i<=n;i++){
            dp[i][0]=1;
            ar[i][0]=1;
        }
        sort(candidates.begin(),candidates.end());
        for(int i=1;i<=n;i++){
            for(int j=1;j<=target;j++){
                if(candidates[i-1]>j){
                    dp[i][j]=dp[i-1][j];
                    continue;
                }                
                dp[i][j] = dp[i-1][j-candidates[i-1]]|dp[i-1][j];
                ar[i][j] = dp[i-1][j-candidates[i-1]];                
            }
        }
        return solve(target,n,candidates);        
    }
}; 