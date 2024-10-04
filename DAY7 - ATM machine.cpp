#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin>>T;
	
	while(T--){
	    int N;
	    cin>>N;
	    int K;
	    cin>>K;
	    int arr[N];
	    for(int i = 0; i<N; i++){
	        cin>>arr[i];
	    }
	    for(int i = 0; i<N; i++){
	        if(K >= arr[i]){
	            K -= arr[i];
	            cout<<1;
	        }
	        else{
	            cout<<0;
	        }
	    }
	    cout<<endl;
	    
	}

}
