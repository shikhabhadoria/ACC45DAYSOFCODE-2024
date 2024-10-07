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
	    if(X < Y){
	        int a = Y / X;
	        int b = Y % X;
	        if(b == 0){
	            cout<<a-1<<endl;
	        }
	        else{
	            cout<<a<<endl;
	        }
	        
	    }
	    else{
	        cout<<0<<endl;
	    }
	}

}
