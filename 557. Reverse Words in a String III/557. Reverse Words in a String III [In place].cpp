class Solution 
{
 public:
    
    // Doing it in-place.
    
    void reverse (string &str, int s, int e)
    {
        while (s < e)
        {
            swap(str[s], str[e]);
            ++s; --e;
        }
    }
    
    string reverseWords(string str) 
    {
        int n = str.size();
        int s = 0;
        int e = 0;
        for (int i=0; i<=n; ++i)
        {
            if (i == n || str[i] == ' ')
            {
                reverse (str, s, i-1);
                s = i+1;
                e = i+1;
            }
        }
        
        return str;
    }
};
