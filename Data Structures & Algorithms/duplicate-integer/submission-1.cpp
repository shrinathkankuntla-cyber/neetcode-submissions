class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int>S;
        for( int i =  0 ; i<nums.size() ; i++){
            if( S.find(nums[i]) != S.end()){
              return true;
              break;
            }
            S.insert(nums[i]);
        }
        return false;
    }
};