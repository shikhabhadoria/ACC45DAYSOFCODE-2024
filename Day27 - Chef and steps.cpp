#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int N;
	    cin>>N;
	    int k;
	    cin>>k;
	    int D[N];
	    for(int i = 0; i<N; i++){
	        cin>>D[i];
	    }
	    string s = "";
	    for(int i = 0; i<N; i++){
	        if(D[i] % k == 0){
	            s += "1";
	        }
	        else{
	            s += "0";
	        }
	    }
	    cout<<s<<endl;
	}

}
