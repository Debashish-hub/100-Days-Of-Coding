// Pascal's Triangle II

// Given an integer rowIndex, return the rowIndexth (0-indexed) row of the Pascal's triangle.
// In Pascal's triangle, each number is the sum of the two numbers directly above it as shown:

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> ans;
        ans.push_back(1);
        long long int C=1;
        for(int i=1; i<=rowIndex; i++){
            C = (C * (rowIndex - i + 1)) / i;
            ans.push_back(C);
        }
        return ans;
    }
};

        