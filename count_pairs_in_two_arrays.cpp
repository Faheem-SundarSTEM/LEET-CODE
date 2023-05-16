/*
      code for the problem ...
      https://leetcode.com/problems/count-pairs-in-two-arrays/
*/
class Solution {
public:
    long long countPairs(vector<int>& v, vector<int>& vv){
        vector <int> dif;
        int sz = v.size();
        for (int i = 0;i < sz ;i++)
            dif.push_back(v[i]-vv[i]);
        long long ans = 0 ;
        sort(begin(dif),end(dif));
        for (int i = 0;i < sz;i++){
            if(dif[i] > 0){
                int w = lower_bound(begin(dif),end(dif),-dif[i]+1)-begin(dif);
                ans += (i-w);
            }
        }
        return ans;
    }
};
