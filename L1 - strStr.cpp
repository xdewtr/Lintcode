class Solution {
public:
    /**
     * Returns a index to the first occurrence of target in source,
     * or -1  if target is not part of source.
     * @param source string to be scanned.
     * @param target string containing the sequence of characters to match.
     */
    int strStr(const char *s, const char *t) {
        if(!s||!t) return -1;
        if(!*t) return 0;
        char *p1 = s, *p2 = t, *cursor = s;
        // loop only s.size()-t.size()+1 times
        for(p2 = &t[1];*p2; ++p2){
            cursor++;
        }
        for(; *cursor; cursor++){
            char *current_p1 = p1;
            p2=t;
            while(p1&&p2&&*p1==*p2){
                p1++;p2++;
            }
            if(!p2) return current_p1-s;
            p1=current_p1+1;
        }
        return -1;
    }
};
