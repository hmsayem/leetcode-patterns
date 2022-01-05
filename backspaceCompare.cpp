class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int i = s.length() - 1;
        int j = t.length() - 1;
        while(i >= 0 || j >= 0){
            int cnt = 0;
            char a = ' ';
            while(i >= 0){
                if(s[i] == '#'){
                    cnt++;
                }else if(cnt > 0){
                    cnt--;
                    
                }else{
                    a = s[i];
                    i--;
                    break;
                }
                i--;
            }
            cnt = 0;
            char b = ' ';
            while(j >= 0){
                if(t[j] == '#'){
                    cnt++;
                }else if(cnt > 0){
                    cnt--;
                    
                }else{
                    b = t[j];
                    j--;
                    break;
                }
                j--;
            }
            if(a != b){
                return false;
            }
        }
        return true;
    }
};