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
	    int S;
	    cin>>S;
	    int A[N];
	    int B[N];
	    int box = X;
	    for(int i = 0; i<S; i++){
	        cin>>A[i];
	        cout<<" ";
	        cin>>B[i];
	        cout<<endl;
	    }
	    for(int i = 0; i<S; i++){
	        if(box == A[i]){
	            box = B[i];
	        }
	        else if(box == B[i]){
	            box = A[i];
	        }
	    }
	    cout<<box<<endl;
	    
	}

}
