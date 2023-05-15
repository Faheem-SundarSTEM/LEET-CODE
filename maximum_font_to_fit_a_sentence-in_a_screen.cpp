/*
      code for the problem ...
      https://leetcode.com/problems/maximum-font-to-fit-a-sentence-in-a-screen/
*/
class Solution {
public:
    int maxFont(string text,int w,int h,vector<int>&fonts,FontInfo fontInfo){
        long long s = 0;
        long long e = fonts.size();
        while(s!=e){
           long long mi = (s+e)/2 , m = 0;
           long long n = fontInfo.getHeight(fonts[mi]);
           for(int i=0;i<text.size();i++){
               m += fontInfo.getWidth(fonts[mi],text[i]) ;
           }
           if(n<=h && m<=w) s=mi+1;
           else e=mi; 
        }
        if(s) 
            return fonts[s-1];
        return -1;
    }
};
