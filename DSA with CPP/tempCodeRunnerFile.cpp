class Solution {
public:
    string removeDuplicates(string s) {
        int i=0;
        int len=s.length();
        while(i < len )
        {
            if(s[i]==s[i+1]){
                s.erase(i,2);
                len=s.length();
            }
            else if(s[i]==s[i-1] && i > 0 )
            {
                i=i-1;
                s.erase(i,2);
                len=s.length();
            }
            else
                i++;

        }
        return s;
    }
};