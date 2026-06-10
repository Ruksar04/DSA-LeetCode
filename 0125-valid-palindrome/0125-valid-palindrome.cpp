class Solution {
public:
    bool isPalindrome(string s) {
        string cleantext = "";
        for(char c: s){
            if(isalnum(c)){
                cleantext += toupper(c);
            }
        }
        string output = cleantext;
        int left = 0;
        int right = cleantext.size()-1;
        while(left < right){
            char temp = cleantext[left];
            cleantext[left] = cleantext[right];
            cleantext[right] = temp;
            left++;
            right--;
        }
        if(output == cleantext) return true;
        else return false;
    }
};