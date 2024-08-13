class Solution {
public:
    string reverseWords(string str) {
        string r="";
        int s, e=str.size()-1, i;
        while (e>=0) {
            if (str[e]!=' ') {
                s=e;
                while (s>=0 && str[s]!=' ') s--;
                if (r!="") r+=' ';
                for (i=s+1; i<=e; ++i) r+=str[i];
                e=s;
            } else e--;
        }
        return r;
    }
};