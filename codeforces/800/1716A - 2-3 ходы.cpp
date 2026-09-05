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
     
     if(n%3==0){
        cout<<n/3<<endl;
     }
     else if(n%3==2){
        cout<<1+(n-2)/3<<endl;
     }
     else{
        ll ans=0;
        if(n>=4){
           n-=4; ans+=2;
        }
        ans+=(n/3);
        n-=(n/3)*3;
        ans+=n/2;
        n-=(n/2)*2;
        if(n==1)ans+=2;
        cout<<ans<<endl;
     }
        
}
return 0;}
