#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
ios_base :: sync_with_stdio(false);
cin.tie(NULL);
     ll n,k;
     cin>>n>>k;
     vector<ll>v(n);
     for(int i=0;i<n;i++)cin>>v[i];  
     sort(v.begin(),v.end());
     ll ans=v[n/2];

     ll low=ans,high=1e10;

     while(low<=high){
         ll need=0,mid=low+(high-low)/2;
         for(int i=n/2;i<n;i++){
            need+=max(0LL,mid-v[i]);
         }
         if(need<=k){
            ans=mid;
            low=mid+1;
        }
        else high=mid-1;

     }
     cout<<ans<<endl;
        
return 0;}


// 1st Approach
/*ll ans=v[n/2];

     bool flag=false;
     for(int i=n/2+1;i<n;i++){
           if((v[i]-v[i-1])*(i-n/2)<=k){
                 k-=(v[i]-v[i-1])*(i-n/2);
                 ans=v[i];
           }  
           else {
             ans+=k/(i-n/2);
             break;
           }

           if(i==n-1)flag=true;
     }
    
     if(flag||n==1)ans+=k/((n+1)/2);
     cout<<ans<<endl;*/