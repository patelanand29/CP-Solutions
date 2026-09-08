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
     ll n,k;
     cin>>n>>k;
     vector<ll>v(n);
     ll cnt=0,sum=0;
     for(int i=0;i<n;i++){
        cin>>v[i];
        if(v[i]%k==0)cnt++;
        sum+=v[i];
     }
  
     if(cnt==n){
        cout<<-1<<endl;
        continue;
     }
     else if(sum%k!=0){
        cout<<n<<endl;
        continue;
     }
     else{
         ll ans=0,l=0,r=n-1;
         while(l<=r){
            if(v[l]%k!=0){
                ans=max(l+1,n-l-1);
                break;
            } 
            else if(v[r]%k!=0){
                ans=max(r,n-r-1);
                break;
            }
                l++;
                r--;
            
        }
            cout<<ans<<endl;
     }
    
        
}
return 0;}
