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
	    map<int , int> mpp;
	    for(int i = 0; i<N; i++){
	        cin>>arr[i];
	        mpp[arr[i]]++;
	    }
	    bool flag = true;
	    for(int i = 0; i<=N; i++){
	       if(mpp[arr[i]] % arr[i] != 0){
	           flag = false;
	           break;
	       }
	    }
	    if(flag == true){
	        cout<<"Yes"<<endl;
	    }
	    else{
	        cout<<"No"<<endl;
	    }
	}

}
