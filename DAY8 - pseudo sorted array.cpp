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
	    for(int i = 0; i<N; i++){
	        cin>>arr[i];
	    }
	    int count = 0;
    	for(int i = 0; i<N-1; i++){
    	    while(arr[i] > arr[i+1]){
    	        swap(arr[i] , arr[i+1]);
    	        count++;
    	        if(i != 0) i--;
    	    }
    	}
    	if(count == 1 || count == 0) cout<<"YES"<<endl;
    	else cout<<"NO"<<endl;
	}

}
