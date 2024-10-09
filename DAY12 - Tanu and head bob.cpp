#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	
	while(T--){
	    int N;
	    cin>>N;
	    string s;
	    cin>>s;
	    bool flag = true;
	    for(int i = 0; i<N; i++){
	        if(s[i] == 'I'){
	            cout<<"INDIAN"<<endl;
	            flag = false;
	            break;
	        }
	        else if(s[i] == 'Y'){
	            cout<<"NOT INDIAN"<<endl;
	            flag = false;
	            break;
	        }
	    }
	    
	    if(flag == true){
	        cout<<"NOT SURE"<<endl;
	    }
	}

}
