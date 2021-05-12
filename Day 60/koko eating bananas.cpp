// Koko Eating Bananas

// Koko loves to eat bananas. There are n piles of bananas, the ith pile has piles[i] bananas. The guards have gone and 
// will come back in h hours.
// Koko can decide her bananas-per-hour eating speed of k. Each hour, she chooses some pile of bananas and eats k 
// bananas from that pile. If the pile has less than k bananas, she eats all of them instead and will not eat any more 
// bananas during this hour.

// Koko likes to eat slowly but still wants to finish eating all the bananas before the guards return.

// Return the minimum integer k such that she can eat all the bananas within h hours.


class Solution {
public:
    bool possible(vector<int>& piles, int h,int mid, int n)
    {
        int time = 0;
        for(int i = 0; i < n; i++)
           time += (piles[i]  - 1) / mid +1;
        
        return time <= h;
    }
    
    int minEatingSpeed(vector<int>& piles, int h) 
    {
        int n = piles.size(); 
        int low = 1, high = *max_element(piles.begin(), piles.end());
     
        while(low < high)
        {
            int mid = low + (high - low)/2;
            if(possible(piles, h, mid,n))
                high = mid;
            else
                low = mid + 1;
        }
        
        return low;
    }

};