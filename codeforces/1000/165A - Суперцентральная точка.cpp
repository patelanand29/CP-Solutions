#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
ios_base :: sync_with_stdio(false);
cin.tie(nullptr);
cout.tie(nullptr);
     ll n;
     cin>>n;
     vector<vector<ll>>v(n,vector<ll>(2));
     for(int i=0;i<n;i++){
          for(int j=0;j<2;j++){
            cin>>v[i][j]; }} 
     ll ans=0;
        for(int i=0;i<n;i++){
             ll c1=0,c2=0,c3=0,c4=0;
            for(int x=0;x<n;x++){
                 if(v[x][0]==v[i][0] && v[x][1]>v[i][1]){
                     c1++;
                 }
                 else if(v[x][0]==v[i][0] && v[x][1]<v[i][1]){
                     c2++;
                 }
                 else if(v[x][1]==v[i][1] && v[x][0]>v[i][0]){
                     c3++;
                 }
                 else if(v[x][1]==v[i][1] && v[x][0]<v[i][0]){
                     c4++;
                 }
            }
            if(c1>0 && c2>0 && c3>0 && c4>0){
                ans++;
            }
        }   
        cout<<ans<<endl;

return 0;}
