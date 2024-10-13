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
	    int freq[100] = {0};
	    bool flag = true;
	    for(int i = 0; i<N; i++){
	        cin>>arr[i];
	        freq[arr[i]]++;
	    }
	    for(int i = 0; i<N; i++){
	        if(freq[arr[i]] % 2 == 0){
	            continue;
	        }
	        else{
	            flag = false;
	            break;
	        }
	    }
	    if(flag == true){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}

}
