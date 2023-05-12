/*
      Code for problem ...
      https://leetcode.com/problems/longest-repeating-substring/
*/
class Solution {
public:
    int longestRepeatingSubstring(string s){
        unordered_map <string,bool> map;
        int sz = s.size() , maxx = 0;
        for(int i = 0 ;i < sz;i++){
            string tmp = "" ;
            for(int j = i;j < sz;j++){
                tmp += s[j];
                if(map[tmp] == false)
                    map[tmp] = true ;
                else
                    maxx = max(int(tmp.size()),maxx);
            }
        }
        return maxx;
    }
};
