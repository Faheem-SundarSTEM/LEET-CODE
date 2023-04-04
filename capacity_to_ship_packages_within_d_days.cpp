/*
     this is the code for problem .. 
     https://leetcode.com/problems/capacity-to-ship-packages-within-d-days/
*/
class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int sum = 0 , maxx = 0;
        for (int i : weights){
            sum += i ;
            if(maxx < i) maxx = i ;
        }
        int start = maxx, end = sum ; 
        while (start < end){
            int mid = (start + end) / 2;
            int needays = 1 , load = 0 ;
            for (int i : weights){
                load += i ;
                if (load > mid)
                    needays ++ ,load = i ;
            }
            if(needays <= days) end = mid ;
            else start = mid + 1 ;  
        }
        return start;
    }
};
