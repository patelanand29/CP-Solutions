#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
ios_base :: sync_with_stdio(false);
cin.tie(nullptr);
cout.tie(nullptr);
     ll n,x,y;
     cin>>n>>x>>y;
     vector<ll>v(n);
     for(int i=0;i<n;i++)cin>>v[i];

     for(int i=0;i<n;i++){
         ll minn=INT_MAX;
         for(int j=i;j>=i-x && j>=0;j--){
             if(v[j]<minn){
                 minn=v[j];
             }
         }

         for(int j=i;j<=i+y && j<n;j++){
             if(v[j]<minn){
                 minn=v[j];
             }
         }
         if(minn==v[i]){
                cout<<i+1<<endl;
                break;
            }
     }

        

return 0;}
