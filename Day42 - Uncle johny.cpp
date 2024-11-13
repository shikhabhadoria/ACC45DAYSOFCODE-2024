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
	    int k;
	    cin>>k;
	    int pos = arr[k-1];
	    sort(arr , arr + N);
	    for(int i = 0; i<N; i++){
	        if(arr[i] == pos){
	            cout<<(i+1)<<endl;
	            break;
	        }
	    }
	}

}
