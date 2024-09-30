#include <bits/stdc++.h>
using namespace std;


int main() {
	// your code goes here
	int T;
	cin>>T;
	int dDSA , dTOC , dDM;
	int sDSA , sTOC , sDM;
	for(int i = 0; i<T; i++){
        cin>>dDSA>>dTOC>>dDM;
        cin>>sDSA>>sTOC>>sDM;
        
        int dsum = dDSA + dTOC + dDM;
        int ssum = sDSA + sTOC + sDM;
        
        if(dsum > ssum){
            cout<<"DRAGON"<<endl;
        }
        else if(dsum < ssum){
            cout<<"SLOTH"<<endl;
        }
        else{
            if(dDSA > sDSA){
                cout<<"DRAGON"<<endl;
            }
            else if(dDSA < sDSA){
                cout<<"SLOTH"<<endl;
            }
            else{
                if(dTOC > sTOC){
                    cout<<"DRAGON"<<endl;
                }
                else if(dTOC < sTOC){
                    cout<<"SLOTH"<<endl;
                }
                else{
                    cout<<"TIE"<<endl;
                }
            }
        }
	}
}
