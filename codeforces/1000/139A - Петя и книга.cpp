#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
ios_base :: sync_with_stdio(false);
cin.tie(nullptr);
cout.tie(nullptr);
     ll n;
     cin>>n;
     vector<ll>v(7);
     for(int i=0;i<7;i++)cin>>v[i];
     
     ll cnt=0;
     int i=0;
     while(1){
           if(cnt+v[i]<n){
                cnt+=v[i];
           }
           else{
            cout<<i+1<<endl;
               break;
           }
             i++;
             i%=7;
     }
 
     
        

return 0;}
