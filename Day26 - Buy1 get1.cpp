#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    string s;
	    cin>>s;
	    map<char , int> freq;
	    for(char ch : s){
	        freq[ch]++;
	    }
	    int cost = 0;
	    for(auto it : freq){
	        if(it.second <= 1){
	            cost += it.second;
	        }
	        else{
	            cost += (it.second) % 2;
	            cost += (it.second) / 2;
	        }
	    }
	    cout<<cost<<endl;
	}

}
