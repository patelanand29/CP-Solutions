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
     vector<ll>v(n),last(n);
     last[0]=-1;

     for(int i=0;i<n;i++){
        cin>>v[i];}

     for(int i=1;i<n;i++){
         if(v[i]!=v[i-1]){
          last[i]=i-1;
            } 
         else{
            last[i]=last[i-1];
            }
        }

     ll q;
     cin>>q;
     for(int i=0;i<q;i++){
        ll l,r;
        cin>>l>>r;
        if(last[r-1]==-1 || last[r-1]<l-1){
            cout<<"-1 -1"<<endl;
        }
        else cout<<r<<" "<<last[r-1]+1<<endl;
     }
        cout<<endl;
}
return 0;}
