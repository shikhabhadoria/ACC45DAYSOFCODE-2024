#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int N;
	    cin>>N;
	    int count1 = 0;
	    int count2 = 0;
	    for(int i = 0; i<N; i++){
	        string s;
	        cin>>s;
	        if(s == "START38"){
	            count1++;
	        }
	        else{
	            count2++;
	        }
	    }
	    cout<<count1<<" "<<count2<<endl;
	   // int count1 = 0;
	   // int count2 = 0;
	   // for(int i = 0; i<N; i++){
	   //     if(s == "START38"){
	   //         count1++;
	   //     }
	   //     else{
	   //         count2++;
	   //     }
	   // }
	   // cout<<count1<<" "<<count2<<endl;
	}

}
