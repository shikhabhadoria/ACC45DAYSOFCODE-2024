#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    long long N;
	    cin>>N;
	    long long odd = 0;
	    long long even = 0;
	    if(N % 2 == 0){
	        odd = N / 2;
	        even = N / 2;
	    }
	    else{
	        odd = (N / 2) + 1;
	        even = N / 2;
	    }
	    cout<<2*(odd * even)<<endl;
	}

}
