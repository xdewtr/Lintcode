class Solution {
public:
    /**
     * @param A: a list of integers
     * @return : return an integer
     */
    int removeDuplicates(vector<int> &v) {
        // write your code here
        if(v.size()==0) return 0;
        int idx = 0;
        for(int i=1; i<v.size(); ++i){
        	if(v[i-1]!=v[i]){
        		v[++idx] = v[i];
        	}
        }
        return idx+1;
    }
};