#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin>>T;
	
	while(T--){
	    int N;
	    cin>>N;
	    string s = "";
	    cin>>s;
	    int count0 = 0;
	    int count1 = 0;
	    for(int i = 0; i<N; i++){
	        if(s[i] == '0'){
	            count0++;
	        }
	        else{
	            count1++;
	        }
	    }
	    string result = string(count0 , '0') + string(count1 , '1');
	    cout<<result<<endl;
	}
}
