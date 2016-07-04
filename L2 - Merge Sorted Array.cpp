class Solution {
public:
    /**
     * @param A: sorted integer array A which has m elements, 
     *           but size of A is m+n
     * @param B: sorted integer array B which has n elements
     * @return: void
     */
    void mergeSortedArray(int A[], int m, int B[], int n) {
        // write your code here
        if(A==nullptr||B==nullptr) return;
        if(n==0) return;
     	int i = m-1;
     	int j = n-1;
     	while(i>=0 && j>=0){
     		if(A[i]>B[j]){
     			A[i+j+1] = A[i--];
     		}
     		else{
     			A[i+j+1] = B[j--];
     		}
     	}   
     	while(j>=0){
     		A[i+j+1] = B[j--];
     	}
    }
};