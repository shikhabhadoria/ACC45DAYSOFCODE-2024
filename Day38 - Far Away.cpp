#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	long long T;
	cin>>T;
	while(T--){
	    long long N;
	    cin>>N;
	    long long M;
	    cin>>M;
	    vector<long long> A(N);
	    for(long long i = 0; i<N; i++){
	        cin>>A[i];
	    }
	    long long mid = M / 2;
	    long long count = 0;
	    for(long long i = 0; i<N; i++){
	        if(A[i] <= mid){
	            count += (M - A[i]);
	        }
	        else{
	            count += (A[i] - 1);
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;

}
