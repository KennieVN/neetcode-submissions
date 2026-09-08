class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        int dem = 0;
        if (t.size() != s.size()) return false;
        else
            for(int i = 0; i <t.size() ; i++ ){
                if (s[i] == t[i]) dem++;
                else return false;
            }
        if(dem++ == s.size()) return true;

    }
};
