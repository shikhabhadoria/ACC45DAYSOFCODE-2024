#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	
	while(T--){
	    int N;
	    cin>>N;
	    int X;
	    cin>>X;
	    int arr[N];
	    int maxi = X;
	    for(int i = 0; i<N; i++){
	        cin>>arr[i];
	    }
	    
	    for(int i = 0; i<N; i++){
	        X += arr[i];
	        if(maxi < X){
	            maxi = X;
	        }
	    }
	    cout<<maxi<<endl;
	}
    return 0;
}
