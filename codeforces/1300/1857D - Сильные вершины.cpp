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
     vector<ll>a(n),b(n),ans;
     for(int i=0;i<n;i++)cin>>a[i];
     for(int i=0;i<n;i++)cin>>b[i];

     for(int i=0;i<n;i++){
        a[i]-=b[i]; }
     
     ll maxx=*max_element(a.begin(),a.end());

     for(int i=0;i<n;i++){
        if(a[i]==maxx)ans.push_back(i+1);
     }
     
     sort(ans.begin(),ans.end());

     cout<<ans.size()<<endl;
     for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
     }
        cout<<endl;
}
return 0;}
