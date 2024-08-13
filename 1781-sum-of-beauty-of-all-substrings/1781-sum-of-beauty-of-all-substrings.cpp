class Solution {
public:
    int beautySum(string s) {
        int i, j, r=0, cmax, cmin;
        for (i=0; i<s.size(); ++i) {
            unordered_map<char, int> f;
            for (j=i; j<s.size(); ++j) {
                f[s[j]]++;
                cmax=INT_MIN;
                cmin=INT_MAX;
                for (auto el : f) {
                    cmax=max(cmax, el.second);
                    cmin=min(cmin, el.second);
                }
                r+=cmax-cmin;
            }
        }
        return r;
    }
};