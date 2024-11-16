#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int N;
	    cin>>N;
	    int arr[N];
	    unordered_map<int , int> mark;
	    int maxi = 0;
	    int count = 0;
	    for(int i = 0; i<N; i++){
	        cin>>arr[i];
	        mark[arr[i]] = 1;
	    }
	    for(int i = 0; i<N; i++){
	        if(mark[arr[i]] == 1){
	            count++;
	            mark[arr[i]] = 0;
	        }
	        else{
	            count--;
	            mark[arr[i]] = 1;
	        }
	        maxi = max(maxi , count);
	    }
	    cout<<maxi<<endl;
	}

}
