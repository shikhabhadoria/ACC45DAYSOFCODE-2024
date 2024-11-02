#include <bits/stdc++.h>
using namespace std;

void swap(int a , int b){
    int temp = a;
    a = b;
    b = temp;
}

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    long N;
	    cin>>N;
	    long A[N];
	    for(int i = 0; i<N; i++){
	        cin>>A[i];
	    }
	    for(int i = 0; i<N-1; i++){
	        if(i % 2 == 0){
	            if(A[i] >= A[i+1]){
	                swap(A[i] , A[i+1]);
	            }
	        }
	        else{
	            if(A[i] <= A[i+1]){
	                swap(A[i] , A[i+1]);
	            }
	        }
	    }
	    for(int i = 0; i<N; i++){
	        cout<<A[i]<<" ";
	    }
	    cout<<endl;
	}

}
