/*
        code for the problem ....
        https://leetcode.com/problems/k-th-smallest-prime-fraction

*/
class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        vector < pair <double ,pair < int , int>>> v;
        int n = arr.size() ;
        for(int i =0 ;i < n ;i ++){
            for(int j = i+1 ;j < n ;j++){
                double u = (double) arr[i] / arr[j];
                v.push_back({u,{arr[i],arr[j]}}) ;
            }
        }
        sort(v.begin() , v.end() ) ;
        int c = 0;
        vector <int> vv(2) ; 
        for(auto i : v){
            c ++;
            if(c == k){
                vv[0] = i.second.first;
                vv[1] = i.second.second;
                break ;
            }
        }
        return vv;
    }
};
