class Solution {
public:    
    /**
     * @param strs: A list of strings
     * @return: A list of strings
     */
    vector<string> anagrams(vector<string> &dict) {
        // write your code here
        vector<string> res;
        if(dict.size()==0) return res;
        unordered_map<string,int> umap;
        for(int i=0; i<dict.size();++i){
        	string s = dict[i];
        	sort(s.begin(),s.end());
        	if(umap.find(s)!=umap.end()){
        		if(umap[s]!=-1){
        			res.push_back(dict[umap[s]]);
        			umap[s]=-1;

        		}
        		res.push_back(dict[i]);
        	}
        	else{
        		umap[s] = i;
        	}

        }
        return res;

    }
};
