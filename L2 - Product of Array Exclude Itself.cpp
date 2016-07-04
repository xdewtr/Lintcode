class Solution {
public:
    /**
     * @param A: Given an integers array A
     * @return: A long long array B and B[i]= A[0] * ... * A[i-1] * A[i+1] * ... * A[n-1]
     */
    vector<long long> productExcludeItself(vector<int> &v) {
        // write your code here
        /*
			B[i] = (A[0]*...*A[i-1]) * (A[i+1]*...*A[n-1])
			so we process left first and later we process right

        */
		vector<long long> res(v.size(),1);
		long long sum = 1; // need to be large enough to hold the number
		if(v.size()==0) return res;
		for(int i=0; i<v.size(); ++i){
			res[i]*= sum;	// so we don't multiply ourself
			sum*=v[i];
		}
		sum = 1;
		for(int i=v.size()-1; i>=0; --i){
			res[i]*= sum;
			sum*=v[i];
		}
		return res;

    }
};