#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int N;
	    cin>>N;
	    if(N < 5){
	        cout<<(N%5)<<endl;
	    }
	    else{
	        int a = N / 5;
	        int b = N % 5;
	        cout<<((4*a)+b)<<endl;
	    }
	    
	}
	return 0;

}
