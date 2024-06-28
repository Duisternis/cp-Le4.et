class Solution {
public:
    string convert(string s, int numRows) {
        if (s.size()<=1 || numRows==1) return s;
        string result;
        int i, j, n=s.size();
        for (i=0; i<numRows; ++i) {
            for (j=i; j<n; j+=2*(numRows-1)) {
                result.push_back(s[j]);
                if (j+(2*(numRows-1)-2*i) < n && i!=0 && i!=numRows-1) {
                    result.push_back(s[j+(2*(numRows-1)-2*i)]);
                }
            }
        }
        return result;
    }
};