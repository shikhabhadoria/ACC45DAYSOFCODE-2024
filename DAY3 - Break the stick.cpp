#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	
	while(T--){
	    int N;
	    cin>>N;
	    int X;
	    cin>>X;
	    int p = N % X;
	    if(X == 1){
	        cout<<"Yes"<<endl;
	        continue;
	    }
	    if(X % 2 == 0){
	        if(p % 2 == 0){
	            cout<<"Yes"<<endl;
	        }
	        else{
	            cout<<"No"<<endl;
	        
	        }
	    }
	    else{
	        if(p % 2 != 0){
	            cout<<"Yes"<<endl;
	        }
	        else{
	            int q = p - 1;
	            if(q % 2 != 0){
	                cout<<"Yes"<<endl;
	            }
	            else{
	                cout<<"No"<<endl;
	            }
	        }
	    }
   	}

}
