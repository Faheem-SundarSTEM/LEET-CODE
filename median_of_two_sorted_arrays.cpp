/*
      Code for problem median of two sorted arrays ...
      https://leetcode.com/problems/median-of-two-sorted-arrays
*/
class Solution { 
public:
  double findMedianSortedArrays(vector<int>& a, vector<int>& b) {
    int sza = a.size() , szb = b.size() ;
		int p1 = 0 , p2 = 0 ;
		vector <int> v ;
		int mid = (sza + szb) / 2 ;
		while(p1 < sza and p2 < szb){
			if(a[p1] < b[p2])
				v.push_back(a[p1]),p1 ++;
			else if(p1 < sza)
				v.push_back(b[p2]),p2 ++ ;
		}
		// remn
		while(p1 < sza) v.push_back(a[p1]),p1++;
		while(p2 < szb) v.push_back(b[p2]),p2++;
		if((sza + szb) % 2 == 0)
			return ((long double)(v[mid] + v[mid-1]))/2 ;
		else 
			return v[mid] ;
	} 
};
