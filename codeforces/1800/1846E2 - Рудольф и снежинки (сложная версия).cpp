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
     ll n;
     cin>>n;
     bool ans=false;
     for(ll k=3; k<=64 ;k++){
         
        ll low=2,high=1e9;

        while(low<=high){
            ll mid= (low+high)/2,kk=k-1;
            __int128_t check=1,sum=1;

            while(kk>0&& check<=1e18 && sum<=n ){
                kk--;
                check*=mid;
                sum+=check;
            }
            if(sum==n){
                ans=true;
                break;
            }
            else if(sum<n){
                low=mid+1;
            }
            else high=mid-1;
            
        }
        if(ans)break;
     }
    if(ans)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
return 0;}
