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
	    
	    sort(arr , arr + N);
	    int operations = 0;
	    bool flag = true;
	    for(int i = 0; i<N; i++){
	        if(i + 1 < arr[i]){
	            flag = false;
	            break;
	            
	        }else{
	            operations += (i + 1 - arr[i]);
	        }
	    }
	    
	    if(flag){
	        cout<<operations<<endl;
	    }
	    else{
	        cout<<-1<<endl;
	    }
	    
	}

}
