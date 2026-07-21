class Solution {
public:
    bool isPalindrome(string s) {
        int l=0,r=s.length()-1; //we are doing -1 cause index starts from 0.
        while(l<r){
            while(l<r && !alphaNum(s[l])){ //basically if its something like 'L-oL'
                l++;
            }
            while(r>l && !alphaNum(s[r])){  //basically if its something like 'Lo-L'
                r--;
            }
            if(tolower(s[l])!=tolower(s[r])){
                return false;
            }
            l++;r--;
        }return true;
    }
    bool alphaNum(char c){
        return (c>='A' && c<='Z' ||
                c>='a' && c<='z' ||
                c>='0' && c<='9' );
    }
};
