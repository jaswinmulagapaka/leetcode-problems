bool backspaceCompare(char* s, char* t) {
    int i = strlen(s) - 1;
    int j = strlen(t) - 1;
    int skip_s = 0;
    int skip_t = 0;

    while (i >= 0 || j >= 0) {
        while (i >= 0) {
            if (s[i] == '#') {
                skip_s++; 
                i--;
            } else if (skip_s > 0) {
                skip_s--; 
                i--;
            } else {
                break; 
            }
        }
        
        while (j >= 0) {
            if (t[j] == '#') {
                skip_t++; 
                j--;
            } else if (skip_t > 0) {
                skip_t--; 
                j--;
            } else {
                break; 
            }
        }
        
        if (i >= 0 && j >= 0 && s[i] != t[j]) {
            return false;
        }
        
        if ((i >= 0) != (j >= 0)) {
            return false;
        }
        
        i--;
        j--;
    }
    
    return true;
}