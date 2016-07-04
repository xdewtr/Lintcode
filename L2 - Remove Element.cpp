class Solution {
public:
    /** 
     *@param A: A list of integers
     *@param elem: An integer
     *@return: The new length after remove
     */
    int removeElement(vector<int> &v, int elem) {
        // write your code here
        if(v.size()==0) return 0;
        int idx = 0;
        for(int i=0; i<v.size(); ++i){
        	if(v[i]!=elem){
        		v[idx++] = v[i];
        	}
        }
        return idx;
    }
};