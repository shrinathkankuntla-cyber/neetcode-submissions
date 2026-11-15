class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        if(nums.empty()) return 0;

        sort(nums.begin(), nums.end());

        int MaxStreak = 1;
        int CurrStreak = 1;

        for(int i = 1; i < nums.size(); i++) {

            if(nums[i] == nums[i-1]) {
                continue;
            }

            if(nums[i] == nums[i-1] + 1) {
                CurrStreak++;
            }
            else {
                CurrStreak = 1;
            }

            MaxStreak = max(MaxStreak, CurrStreak);
        }

        return MaxStreak;
    }
};