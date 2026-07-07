class Solution {
public:
    int characterReplacement(string s, int k) {
        int res = 0;
        unordered_map<char,int> map;
        int l=0;
        int maxfr = 0;
        for(int r=0;r<s.length();r++){
            map[s[r]]++;
            maxfr = max(maxfr,map[s[r]]);
            while((r-l+1)-maxfr > k){
                map[s[l]]--;
                l++;
            }
            res=max(res,r-l+1);
        }
        return res;
        
    }
};
