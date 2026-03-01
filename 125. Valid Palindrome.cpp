class Solution {
public:
    bool isPalindrome(string s) {
        string sf;
        for(char c:s){
            if(isalnum(c)){
                sf += tolower(c);
            }
        }
        int l=0;
        int r= sf.length()-1;
        while(l<r){
            if(sf[l]!=sf[r]){
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
};
