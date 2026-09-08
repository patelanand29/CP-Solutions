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
     vector<pair<ll,ll>>v(n);
     for(int i=0;i<n;i++)cin>>v[i].first>>v[i].second;  

     bool ans=true;
     for(int i=0;i<n;i++){
         
        if(i==0){
            if(v[i].first>=v[i].second){
                continue;
            }
            else {ans=false; break;}
        }
        else{
            if(v[i].first>=v[i].second && v[i].first>=v[i-1].first && v[i].second>=v[i-1].second && (v[i].first-v[i-1].first)>=(v[i].second-v[i-1].second)){
                continue;
            }
            else {ans=false; break;}
        }
     }

     if(ans)cout<<"YES"<<endl;
     else cout<<"NO"<<endl;
}
return 0;}
