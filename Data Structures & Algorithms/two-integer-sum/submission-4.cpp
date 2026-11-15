class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       vector<int> answer;
        vector<pair<int,int>>Store_Indexes;
        for( int i = 0 ; i < nums.size() ; i++){
            Store_Indexes.push_back({nums[i],i});
        }  
        sort( Store_Indexes.begin() , Store_Indexes.end() );
        int start = 0 ;
        int end = Store_Indexes.size() - 1 ;
        while( start <= end ){
            if( Store_Indexes[start].first + Store_Indexes[end].first == target ){
            int idx1 = Store_Indexes[start].second;
            int idx2 = Store_Indexes[end].second;

            answer.push_back(min(idx1, idx2));
            answer.push_back(max(idx1, idx2));
                break;
            }else if( Store_Indexes[start].first + Store_Indexes[end].first < target){
                start++;
            }else{
                end--;
            }
            
        }
        return answer;
    }
};
