// Pascal's Triangle

// Given an integer numRows, return the first numRows of Pascal's triangle.
// In Pascal's triangle, each number is the sum of the two numbers directly above it as shown:

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int i=0;i<numRows;i++){
            vector<int> v;
            long long int C=1;
            v.push_back(1);
            for(int j=1;j<=i;j++){
                C=(C*(i-j+1))/j;
                v.push_back(C);
            }
            ans.push_back(v);
        }
        return ans;
    }
};