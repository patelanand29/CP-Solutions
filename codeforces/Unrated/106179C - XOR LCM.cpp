#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        
    long long c;
	cin>>c;
    
    long long ans=c;
    
    int cnt=0;
    for(int i=32;i>-1;i--){
        if((c>>i)%2==1){
            cnt=i;
            break;
        }
    }
    cnt++;
    cout<<c<<" "<<(c<<cnt)<<endl;
	
	
        
    }
	

}
