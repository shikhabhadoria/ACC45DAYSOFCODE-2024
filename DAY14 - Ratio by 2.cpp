#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int X;
	    cin>>X;
	    int Y;
	    cin>>Y;
	  
	    if(X >= Y){
	        int count = 0;
	        while(true){
	            if(X >= (2*Y)){
	                cout<<count<<endl;
	                break;
	            }
	            Y = Y - 1;
	            count++;
	        }
	    }
	    else{
	        int count = 0;
	        while(true){
	            
	            if(Y >= (2*X)){
	                cout<<count<<endl;
	                break;
	            }
	            X = X - 1;
	            count++;
	        }
	        
	    }
	}

}
