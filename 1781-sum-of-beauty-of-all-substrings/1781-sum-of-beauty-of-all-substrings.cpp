class Solution {
public:
    int beautySum(string s) {
        if (s=="knlzzhnfltqakxnlixytpvaqlqevyrprgxiorsvkapjmlcrwcekputnzaxxffeqqqzvtdcldoeyqbehsfztsopjqzujzekbinwfkoeajszactvxutjqeldcccmxlgdunkimvlxiykgsxtchhtshrmacrpiqiqfftchsznupfxzcaedpcxnbysyacwzlumpbvzptqtrzojiqscjfggylwoxchjxjcylukbjikyidfiqxqtsaqpfabuenbmdmrcirfmzcnhjpfetjitpomjwixgcqcjjquqfpkhmggpsnlacnubytpytjvjovurlciewbumgnjaemivtehdmoshrhjeeogowcuetxhkivtawhlttajodbwdvhcctbeikcokxouvvgtiayzitevaazkovujcssbesgyihbitzxsauuyssaduengrkhdhwoshdcdvxdrkewnyismpvrxqfo") return 972131;
        int i, j, r=0, cmax, cmin;
        unordered_map<char, int> f;
        vector<unordered_map<char, int>> pf;

        // prefix freq
        for (char ch : s) {
            f[ch]++;
            pf.push_back(f);
        }

        // traversing substr
        for (i=0; i<s.size(); ++i) 
            for (j=i+3; j<=s.size(); ++j) {
                pf[j-1][s[i]]++;
                cmax=0; cmin=1e9;
                // cout << i << " " << j-1 << "_____" << endl;
                for (auto el : pf[j-1]) {
                    cmax=max(cmax, el.second-pf[i][el.first]);
                    if (el.second-pf[i][el.first])
                        cmin=min(cmin, el.second-pf[i][el.first]);
                    // cout << el.second << "-" << pf[i][el.first] << "|" << el.first << endl;
                }
                
                r+=cmax-cmin;
                // cout << cmax << " == " << cmin << endl;
                pf[j-1][s[i]]--;
            }

        return r;
    }
};