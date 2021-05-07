// Search a 2D Matrix

// Write an efficient algorithm that searches for a value in an m x n matrix. This matrix has the following properties:

// Integers in each row are sorted from left to right.
// The first integer of each row is greater than the last integer of the previous row.


class Solution {
public:
    int bs_row_find(int s,int e,int val,vector<vector<int>>a){
        int ans=-1,mid;
        while(s<=e)
        {
            mid=(s+e)/2;
            if(a[mid][0]<=val) 
                 {
                     s=mid+1;
                     ans=mid;
                 }
            else e=mid-1;
        }
        return ans;
    }
    static bool bs(int s,int e,int val,vector<int>a){
        int mid;
        while(s<=e)
        {
            mid=(s+e)/2;
            if(a[mid]==val) return 1;
            if(a[mid]<val) s=mid+1;
            else e=mid-1;
        }
        return 0;
    }

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=bs_row_find(0,matrix.size()-1,target,matrix);
        if(row==-1) 
            return 0;
        return bs(0,matrix[row].size()-1,target,matrix[row]);
    }
};

  