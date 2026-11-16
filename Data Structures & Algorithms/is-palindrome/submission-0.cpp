class Solution {
public:

    bool IsAlphaNumeric(char s){
       if( tolower(s) <= '9' && tolower(s) >= '0' || tolower(s) >= 'a' && tolower(s) <= 'z' ){
        return true;
       }
       return false;
    }
    bool isPalindrome(string s) {
        int start = 0 ;
        int end = s.size()-1;
        while( start < end){
            if(!IsAlphaNumeric(s[start])){
                start++;
                continue;
            }
            if(!IsAlphaNumeric(s[end])){
                end--;
                continue;
            }
            if( tolower(s[start]) != tolower(s[end]) ){
               return false;
               break;
            }
            start++;
            end--;
        }
        return true;
    }
};
