#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	
	while(T--){
	    int N;
	    cin>>N;
	    int arr[N];
	    for(int i = 0; i<N; i++){
	        cin>>arr[i];
	    }
	    int count = 0;
	    for(int i = 0; i<N; i++){
	        if(arr[i] % 2 != 0){
	            count++;
	        }
	    }
	    
	    if(count == 0 || count == 1) cout<<"No"<<endl;
	    
	    for(int i = 1; i<count; i++){
	        if(i % 2 != 0){
	           int a = count - i;
	           if(a % 2 != 0){
	               cout<<"Yes"<<endl;
	               break;
	           }
	           else{
	               cout<<"No"<<endl;
	               break;
	           }
	        }
	    }
	   
	}

}
