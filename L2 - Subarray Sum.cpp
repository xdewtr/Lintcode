class Solution {
public:
    /**
     * @param nums: A list of integers
     * @return: A list of integers includes the index of the first number 
     *          and the index of the last number
     */
    vector<int> subarraySum(vector<int> &v){
        // write your code here
        /*
			x  \\\/// x
			i i+1	  j  
			means that from i+1...j the sum is 0
			so we put the sum into map and find the same sum
        */
		vector<int> res;
		if(v.size()==0) return res;
		int sum=0;
		// we need to map sum=0 to idx=-1 since we need this for
		//   3 -3
		// where 
		// 0 3 0 
		unordered_map<int,int> umap;
		umap[sum] = -1;
		for(int i=0; i<v.size(); ++i){
			sum+=v[i];
			if(umap.find(sum)!=umap.end()){
				res.push_back(umap[sum]+1);
				res.push_back(i);
				return res;
			}
			umap[sum] = i;
		}
		return res;
    }
};