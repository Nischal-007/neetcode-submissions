class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int res=0;
        for(int i=0;i<s.size();i++){
            unordered_set<char> charSet;//is it needed to specifically mention set as unordered?
            for(int j=i;j<s.size();j++){
                if(charSet.find(s[j])!= charSet.end()){
                    break;
                }
                charSet.insert(s[j]);//If s[j] is already in the set, break.Otherwise, add it to the set.
            }
            res=max(res,(int)charSet.size());
        }
        return res;
    }
};
