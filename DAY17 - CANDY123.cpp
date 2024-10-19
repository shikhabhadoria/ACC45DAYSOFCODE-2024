#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int i = 1;
	    int sum1 = 0;
	    int sum2 = 0;
	    int A;
	    cin>>A;
	    int B;
	    cin>>B;
	    while(true){
	        if(i % 2 != 0){
	            if(sum1 <= A){
	                sum1 += i;
	            }
	            else{
	                cout<<"Bob"<<endl;
	                break;
	            }
	        }
	        else{
	            if(sum2 <= B){
	                sum2 += i;
	            }
	            else{
	                cout<<"Limak"<<endl;
	                break;
	            }
	        }
	        i++;
	    }
	}

}
