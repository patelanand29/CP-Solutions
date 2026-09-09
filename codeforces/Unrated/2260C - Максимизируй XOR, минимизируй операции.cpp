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
     ll a,b;
     cin>>a>>b;
     ll ans=a+b,cnt=0;
      
     for(int i=30;i>-1;i--){
        if((ans>>i)%2==1 && cnt+(1<<i)<=a){
           cnt+=(1<<i);
        }
     }
     cout<<ans<<" "<<a-cnt<<endl;       
}
return 0;}
