/*
        Code for the problem finding smallest common element in all rows.
        https://leetcode.com/problems/find-smallest-common-element-in-all-rows
*/
class Solution {
public:
    int smallestCommonElement(vector<vector<int>>& mat) {
        map <int ,int> mp ;
        int ans = 0 , maxx = 0,c=0;
        for(int i=0 ;i < mat.size() ;i++){
            for(int j =0 ;j < mat[i].size();j++){
                mp[mat[i][j]] ++;
                if(mp[mat[i][j]] > maxx){
                    maxx = mp[mat[i][j]] ;
                    ans = mat[i][j];
                    c ++ ;
                }
            }
        }
        return (c == mat.size() ? ans : -1);  
    }
};
