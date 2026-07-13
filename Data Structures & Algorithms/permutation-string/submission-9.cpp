class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char,int> fres1;
        for(char c:s1){
            fres1[c]++;
        }
        int win = s1.length();
        int l =0;
        unordered_map<char,int> fres2;
        for(int r = 0;r<s2.length();r++){
            char c = s2[r];
            fres2[c]++;
            if(r-l+1 > win){
                fres2[s2[l]]--;
                if(fres2[s2[l]]==0){
                    fres2.erase(s2[l]);
                }
                l++;
            }
            if(r-l+1 == win){
                if(fres1 == fres2){
                    return true;
                }
            }
            
            
        }
        return false;
        
        
    }
};

