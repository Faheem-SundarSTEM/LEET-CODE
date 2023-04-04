/*
      this is the code for problem ... 
      https://leetcode.com/problems/leftmost-column-with-at-least-a-one/
*/
class Solution {
public:
    int leftMostColumnWithOne(BinaryMatrix &binaryMatrix) {
        int rows  = binaryMatrix.dimensions()[0];
        int cols = binaryMatrix.dimensions()[1];
        int small = INT_MAX ;
        for (int i=0; i < rows ;i++){
            int start = -1 , end = rows ;
            while(start+1 < end){
                int mid = (start + end) / 2 ;
                if (binaryMatrix.get(i,mid)){
                    end = mid;
                    if(small > mid) small = mid;
                }
                else
                    start = mid;
            }
        }
        if (small == INT_MAX)
            return -1;
        return small;
    }
};
