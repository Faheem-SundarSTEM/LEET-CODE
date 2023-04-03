/*
    this is code of problem ...
    https://leetcode.com/problems/missing-element-in-sorted-array/
*/
class Solution {
public:
    int missingElement(vector<int>& nums, int k) {
        int sz= nums.size();
        int a = nums[0],c = 0 ;
        a += k ;
        int w = a ;
        for(int i = 1 ;i < sz;i++){
            if(nums[i] <= a){
                c ++ ;
                a ++ ;
            }
            else{
                break ;
            }
        }
        return (c + w); 
    }
};
