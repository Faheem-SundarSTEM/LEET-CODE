/*
      Code for the problem finding kth smallest pair distance ...
      https://leetcode.com/problems/find-k-th-smallest-pair-distance
*/
class Solution {
    public:
        int smallestDistancePair(vector<int>& nums, int k) {
            sort(nums.begin() , nums.end()) ;
            int start = 0;
            int end = nums[nums.size()-1] - *nums.begin() ;
            while (start < end) {
                int mid = (start + end) / 2;
                int cnt = 0, left = 0;
                for (int right = 0; right < nums.size(); right++){
                    while (nums[right] - nums[left] > mid) left++;
                    cnt += right - left;
                }
                if (cnt >= k) end = mid;
                else start = mid + 1 ;
            }
            return end;
        }
};
