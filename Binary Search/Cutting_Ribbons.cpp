/*
  This is the code for problem ,cutting-ribbons
  https://leetcode.com/problems/cutting-ribbons/
*/
# include <iostream>
# include <vector>
using namespace std ;
bool inq(int mid , vector<int> & ribs , int sz);
int lenx(vector <int>& ribs , int sz){
    int start = 0 , end = 1e9 + 1 ;
    while(end > start+1){
        int mid = (start + end)/2;
        if(inq(mid,ribs,sz))
            start = mid;
        else
            end = mid;
    }
    return start ;// 
}
bool inq(int mid , vector<int> & ribs , int sz){
    int cnt = 0 ;
    for(int i=0 ; i < ribs.size() ;i++)
        cnt += ribs[i] / mid ;
    return (cnt >= sz) ;// 
}
int main(){
    int ribs , needs ;
    cin >> ribs >> needs;
    vector <int> vribs ;
    for(int i =0 ;i < ribs ;i++){
        int in ; cin >> in;
        vribs.push_back(in) ;
    }
    cout << lenx(vribs,needs) << endl ;
    return 0 ;
}
