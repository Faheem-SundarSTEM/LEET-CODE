/*
      Code for the problem ...
      https://leetcode.com/problems/cutting-ribbons/
*/
class Solution {
public:
  int maxLength(vector<int> & arr, int k){
  	int ans=0,max=17;
		for(int i = max ;i >= 0;i--){
			int a1 = 0;
			for(int j:arr)
				a1 += (j / (ans + pow(2,i))) ;
			if(a1 >= k) 
				ans += pow(2,i) ;
		}
		return ans;
  }
};
