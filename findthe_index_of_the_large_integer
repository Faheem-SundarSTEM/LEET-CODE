/*
    this is the code for the problem ...
    https://leetcode.com/problems/find-the-index-of-the-large-integer/
*/
class Solution {
public:
    int getIndex(ArrayReader &reader) {
        int start = 0 , end = reader.length() , mid , func ;
        while (start + 1 < end){
            mid = (start + end) / 2 ;
            func = reader.compareSub(start,mid-1,mid,mid+(mid-start)-1);
            if (func == 1)
                end = mid ;
            else
                start = mid ;
        }
        return start ;
    }
};
