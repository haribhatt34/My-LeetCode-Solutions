class Solution
{
 public:
    void formAns (string &temp, string &ans)
    {
        reverse(temp.begin(), temp.end());
        ans.append(temp);
    }
    
    string reverseWords(string s)
    {
        string temp = "";
        string ans = "";
        
        for (auto &c: s)
        {
            if (c == ' ')
            {
                formAns (temp, ans);
                ans += ' ';
                temp = "";
            }
            else
            {
                temp += c;
            }
        }
        
        formAns (temp, ans);
        return ans;
    }
};
