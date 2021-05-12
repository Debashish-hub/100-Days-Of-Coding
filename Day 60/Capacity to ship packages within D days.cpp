// Capacity To Ship Packages Within D Days


// A conveyor belt has packages that must be shipped from one port to another within D days.
// The ith package on the conveyor belt has a weight of weights[i]. Each day, we load the ship with packages on the 
// conveyor belt (in the order given by weights). We may not load more weight than the maximum weight capacity of the ship.
// Return the least weight capacity of the ship that will result in all the packages on the conveyor belt being shipped within D days.

class Solution {
public:
    int search(vector<int> &weight, int mid){
        int days = 1, s = 0;
        for(int i=0; i<weight.size(); i++){
            if(s + weight[i] > mid){
                days++;
                s = weight[i];
            }else
                s += weight[i];
        }
        return days;
    }
    int shipWithinDays(vector<int>& weights, int D) {
        int sum = 0;
        for(int i=0; i<weights.size(); i++){
            sum += weights[i];
        }
        int start = *max_element(weights.begin(), weights.end()), end = sum, res = INT_MAX;
        while(start <= end){
            int mid = start + (end - start)/2;
            if(search(weights, mid) <= D)
                end = mid - 1;
            else
                start = mid + 1;
        }
        return start;
    }
};