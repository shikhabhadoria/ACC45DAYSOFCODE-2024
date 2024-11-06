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
	    map<int , int> freq;
	    for(int i = 0; i<N; i++){
	        cin>>arr[i];
	        freq[arr[i]]++;
	    }
	    int maxfreq = 0;
	    int value = 0;
	    for(int i = 0; i<N; i++){
	        if(maxfreq < freq[arr[i]]){
	            maxfreq = freq[arr[i]];
	            value = arr[i];
	        }
	    }
	    int count = 0;
	    for(auto it : freq){
	        if(it.second == maxfreq){
	            count++;
	        }
	    }
	    if(count == 1) cout<<value<<endl;
	    else cout<<"CONFUSED"<<endl;
	}

}
