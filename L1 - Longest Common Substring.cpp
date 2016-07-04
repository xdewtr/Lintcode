class Solution {
public:    
    /**
     * @param A, B: Two string.
     * @return: the length of the longest common substring.
     */

    /*
		Recursion solution failed at long input
		"ja;jfadflakjdfa;djfadfdnvadbfkbH:DADHFLDSHfakldhflakdf;
		adfasdhfaufhakdbalbgaldbalkdfafhalkdsfhalsdufhakldbakladshfuojfanjoiehflakshf", 
		"adfanbajfasdjfaodjfaldfnasldfjao"

		We need DP
    */
    /*int longestCommonSubstring(string &A, string &B) {
        // write your code here
        int res = 0;
        if(A.size()==0 || B.size()==0) return 0;
        count(A,B,A.size()-1,B.size()-1, res, 0);
        return res;
    }
    void count(string &A, string &B, int i, int j, int &res, int maxC){
    	if(i<0||j<0) return;
    	if(A[i]==B[j]){
    		maxC+=1;
    		res = max(maxC,res);
    		count(A,B,i-1,j-1,res,maxC);
    	}
    	else{
    		maxC=0;	// reset current
    		count(A,B,i-1,j,res,maxC);
    		count(A,B,i,j-1,res,maxC);
    	}
    }*/
    int longestCommonSubstring(string &A, string &B) {
    	if(A.size()==0 || B.size()==0) return 0;
        vector<vector<int>> dp(A.size(),vector<int>(B.size(),0));
        int res=0;

        // init
        int m = A.size()-1;
        int n = B.size()-1;
        for(int i=m; i>=0; --i){
        	if(A[i]==B[n]){
        		dp[i][n] = 1;
        		res = 1;
        	}

        }
        for(int j=n; j>=0; --j){
        	if(A[m]==B[j]){
        		dp[m][j] = 1;
        		res = 1;
        	}
        }


        for(int i=m-1; i>=0; --i){
        	for(int j=n-1; j>=0; --j){
        		if(A[i]==B[j]){
        			dp[i][j] = dp[i+1][j+1]+1;
        			res = max(res,dp[i][j]);
        		}
        		else{
        			// we will get to i-1, j and i, j-1 anyways
        		}
        	}
        }
        return res;
    }
};
