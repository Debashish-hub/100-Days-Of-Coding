// Kth Smallest Element in a Sorted Matrix

// Given an n x n matrix where each of the rows and columns are sorted in ascending order, return the kth smallest 
// element in the matrix.

// Note that it is the kth smallest element in the sorted order, not the kth distinct element.


class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        vector<int> v;
        for(int i=0; i<matrix.size(); i++){
            for(int j=0; j<matrix[0].size(); j++){
                v.push_back(matrix[i][j]);
            }
        }
        sort(v.begin(),v.end());
        return v[k-1];
    }
};