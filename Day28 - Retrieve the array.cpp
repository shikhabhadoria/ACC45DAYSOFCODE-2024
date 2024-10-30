#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int N;
	    cin>>N;
	    long B[N];
	    long sumB = 0;
	    for(int i = 0; i<N; i++){
	        cin>>B[i];
	        sumB += B[i];
	    }
	    long sumA = sumB / (N+1);
	    
	    for(int i = 0; i<N; i++){
	        cout<<round(B[i] - sumA)<<" ";
	    }
	    cout<<endl;
	}

}
