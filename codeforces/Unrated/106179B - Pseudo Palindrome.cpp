#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        
    int n,d;
	cin>>n>>d;
	vector<int>v(n);
	for(int i=0;i<n;i++){
	    cin>>v[i];
	}
	sort(v.begin(), v.end());
	
	bool ans=true,chance=false;
	
	for(int i=n-1;i>-1;i-=2){
	    if(i>=1 && v[i]-v[i-1]>d && chance==false && n%2==1){
	        chance=true;
	        i++;
	    }
	    else if(i>=1 && v[i]-v[i-1]>d){
	        ans=false;
	        break;
	    }
	}
        if(ans){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
	

}
