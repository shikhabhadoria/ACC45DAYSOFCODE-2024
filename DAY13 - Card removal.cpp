#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int N;
	    cin>>N;
	   
	    int arr[N];
	    int freq[11] = {0};
	    for(int i = 0; i<N; i++){
	        cin>>arr[i];
	        freq[arr[i]]++;
	    }
	    int maxi = 0;
	    
	    for(int i = 0; i<N; i++){
	        maxi = max(freq[arr[i]] , maxi);
	    }
	    
	    cout<<(N - maxi)<<endl;
	}

} 