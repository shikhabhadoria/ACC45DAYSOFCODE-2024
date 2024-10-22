#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int A;
	    cin>>A;
	    int B;
	    cin>>B;
	    
	    int valuation1 = (A * 100)/10;
	    int valuation2 = (B * 100)/20;
	    
	    if(valuation1 > valuation2){
	        cout<<"First"<<endl;
	    }
	    else if(valuation1 < valuation2){
	        cout<<"Second"<<endl;
	    }
	    else{
	        cout<<"Any"<<endl;
	    }
	}

}
