#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
ios_base :: sync_with_stdio(false);
cin.tie(nullptr);
cout.tie(nullptr);
int t;
cin>>t;
while(t--){
     ll k,x;
     cin>>k>>x;
    
     ll ans;
     ll low=0,high=2*k-1;
     bool exact=false;
     while(low<=high){
        ll mid=(low+high)/2;

        ll message=(min(k,mid)*(min(k,mid)+1))/2 + (max(mid-k,0LL)*(3*k-mid-1))/2;
        
        if(message==x){ans=mid; exact=true; break;}
        else if(message<x){
            low=mid+1;
            ans=mid;
        }
        else high=mid-1;

     
     }
     if(exact)cout<<ans<<endl;
     else cout<<min(2*k-1,ans+1)<<endl;
        
}
return 0;}
