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
	    int count = 1;
	    int maxi = 0;
	    sort(arr , arr + N);
	    for(int i = 1; i<N; i++){
	        if(arr[i-1] == arr[i]){
	            count++;
	        }
	        else{
	            maxi = max(maxi , count);
	            count = 1;
	        }
	    }
	    maxi = max(maxi , count);
	    cout<<(N - maxi)<<endl;
	}

}
