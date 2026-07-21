class Solution {
public:
    bool isPalindrome(string s) {
        string newStr; //we are making a new string called newStr
        for (char c :s){ //iterating through the given input string via a "for" loop
            if(isalnum(c)){  //islanum is a inbuilt function to check alphanumeric char
                newStr+=tolower(c); //converting all the char c into lowercase and adding to our new string
            }
        }
        return newStr==string(newStr.rbegin(),newStr.rend());
    }//finallly boolean operator '==' is used to check if the string and the reverse of string
    // are equal , return true is equal else false. rbegin and rend are used for reverse
};
