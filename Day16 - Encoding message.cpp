#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int N;
	    cin>>N;
	    string s;
	    s.resize(N);
    	for(int i = 0; i<N; i++){
    	    cin>>s[i];
    	}
    	int M = N;
    	if(N % 2 != 0){
    	    N = N-1;
    	}
    	for(int i = 0; i<N; i+=2){
    	    swap(s[i] , s[i+1]);
    	}
    	for(int i = 0; i<M; i++){
    	    int asci = int(s[i]) % 97;
    	    s[i] = char(122 - asci);
    	}
    	cout<<s<<endl;
	}
}
