#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int N;
	    cin>>N;
	    int A[N];
	    int B[N];
	    for(int i = 0; i<N; i++){
	        cin>>B[i];
	    }
	    A[0] = 1;
	    int index = 1;
	    for(int i = 0; i<N; i++){
	        if(B[i] == 0){
	            A[index] = A[index-1] + 2;
	        }
	        else{
	            A[index] = A[index-1] + 1;
	        }
	        index++;
	    }
	    if((A[0] + A[N-1])%2 == B[N-1]){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}

}
