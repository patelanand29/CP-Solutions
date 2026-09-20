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
     ll sum=0;
     for(int i=0;i<n;i++){
        cin>>v[i];
        sum+=v[i];
     }  
     sort(v.begin(),v.end());
     if(n<=2){
        cout<<-1<<endl;
     }
     else if(sum>v[n/2]*n*2){
        cout<<0<<endl;
     }
     else{
        cout<<v[n/2]*n*2-sum+1<<endl;
     }
        
}
return 0;}
