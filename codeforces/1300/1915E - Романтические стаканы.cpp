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
     vector<ll>v(n);
     for(int i=0;i<n;i++)cin>>v[i];  
     map<pair<ll,ll>,ll>mp;
     ll even=0,odd=0;
     mp[{0,0}]++;
     bool ans=false;
     for(int i=0;i<n;i++){

        if(i%2==0)even+=v[i];
        else odd+=v[i];

        if(even>=odd && mp[{even-odd,0}]>0 ){
            ans=true;
            break;
        }
        else if(odd > even && mp[{0,odd-even}]>0){
            ans=true;
            break;
        }
        
        if(even>=odd){mp[{even-odd,0}]++;}
        else mp[{0,odd-even}]++;

     }

    if(ans ){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
}
return 0;}
