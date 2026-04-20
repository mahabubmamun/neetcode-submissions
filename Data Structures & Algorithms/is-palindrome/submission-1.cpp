class Solution {
public:
    bool isPalindrome(string s) {
        string new_str = "";
        for(char c : s)
        {
            if(isalpha(c))
            {
                new_str += tolower(c);
            }
        }
        int size = new_str.size();
        int i=0, j=size-1;
        while(i < j)
        {
            if(new_str[i] == new_str[j])
            {
                i++;
                j--;
            }
            else
            {
                return false;
            }
        }
        return true;
    }
};
