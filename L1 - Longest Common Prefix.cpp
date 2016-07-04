class Solution {
public:    
    /**
     * @param strs: A list of strings
     * @return: The longest common prefix
     */
    string longestCommonPrefix(vector<string> &dict) {
        // write your code here
        if(dict.size()==0) return 0;
        for(int idx=0; idx<dict[0].size(); ++idx){
        	for(int i=1; i<dict.size();++i){
        		if(idx>=dict[i].size() || (dict[0][idx]!=dict[i][idx])) return dict[0].substr(0,idx);
        	}
        }
        return dict[0]; // all passed
    }
};