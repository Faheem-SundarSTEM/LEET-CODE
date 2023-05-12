/*
      C++  Code for the leetcode problem....
      https://leetcode.com/problems/kth-smallest-element-in-a-sorted-matrix/
*/
class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int p1 = 0, p2 = 0,p3 = 0;
        int sz = matrix[0].size() ;
        vector <int> v ;
        for(int i =0 ;i < sz;i++){
            for(int j=0; j < sz ; j++){
                v.push_back(matrix[i][j]) ;
            }
        }
        sort(v.begin() , v.end()) ;
        return v[k-1] ;
    }
};
