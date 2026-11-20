class Solution {
public:
    int maxArea(vector<int>& heights) {
        int start  = 0 ;
        int end = heights.size()-1;
        int MaxArea=0;
        while( start < end ){

           MaxArea=max(MaxArea,(end - start)*min( heights[start],heights[end]));
           if( heights[start] < heights[end] ){
                 start++;
           }else{
            end--;
           }
        }
        return MaxArea;
    }
};
