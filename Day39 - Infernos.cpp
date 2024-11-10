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
	    int H[N];
	    for(int i = 0; i<N; i++){
	        cin>>H[i];
	    }
	    int count = 0;
	    for(int i = 0; i<N; i++){
	        if(H[i] <= X){
	            count = count + 1;
	        }
	        else{
	            if(H[i] % X == 0){
	                count += H[i] / X;
	            }
	            else{
	                count += H[i] / X;
	                count = count + 1;
	            }
	        }
	        
	    }
	    int mini = 0;
	    for(int i = 0; i<N; i++){
	        if(mini < H[i]){
	            mini = H[i];
	        }
	    }
	    int ans = min(mini , count);
	    cout<<ans<<endl;
	}

}
