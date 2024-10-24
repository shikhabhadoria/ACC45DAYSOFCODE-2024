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
	    cin>>s;
	    map<int , int> freq;
	    for(int i = 0; i<N; i++){
	        freq[s[i]]++;
	    }
	    bool flag = false;
	    for(int i = 0; i<N; i++){
	        if(freq[s[i]] >= 2){
	            flag = true;
	            break;
	        }
	    }
	    if(flag == true){
	        cout<<(N - 2)<<endl;
	    }
	    else{
	        cout<<(-1)<<endl;
	    }
	}

}
