/*
    this is code for problem ...
    https://leetcode.com/problems/search-in-a-sorted-array-of-unknown-size/
*/
class Solution {
public:
    int search(const ArrayReader& reader, int target) {
        int start = 0 , end = 1e4 + 1 , mid = (start + end) / 2;
        while(start <= end){
            mid = (start + end) / 2;
            if(reader.get(mid) == target)
                return mid ;
            if(reader.get(mid) > target)
                end = mid-1 ;
            else
                start = mid + 1;
        }
        return -1 ; 
    }
};
