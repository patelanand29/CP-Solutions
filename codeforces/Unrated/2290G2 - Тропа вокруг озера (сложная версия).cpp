#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
ios_base :: sync_with_stdio(false);
cin.tie(nullptr);
int t;
cin>>t;
while(t--)
{
     ll n,k;
     cin>>n>>k;
     vector<ll>arr(n);
     for(int i=0;i<n;i++)cin>>arr[i];
     

     ll low=0,high=1e9,ans=1e9;

     while(low<=high){
        ll cnt=0;
        ll mid= low + (high-low)/2;

        vector<ll>v=arr;
        
        for(int i=0;i<n;i++){
            if(i==0){
                if(v[n-1]-v[0]>mid){
                    cnt+=(v[n-1]-v[0]-mid);
                    v[0]+=(v[n-1]-v[0]-mid);
                }
                else if(v[0]-v[n-1]>mid){
                    cnt+=(v[0]-v[n-1]-mid);
                    v[n-1]+=(v[0]-v[n-1]-mid);
                }
            }
            else{
                if(v[i-1]-v[i]>mid){
                    cnt+=(v[i-1]-v[i]-mid);
                    v[i]+=(v[i-1]-v[i]-mid);
                }
                else if(v[i]-v[i-1]>mid){
                    cnt+=(v[i]-v[i-1]-mid);
                    v[i-1]+=(v[i]-v[i-1]-mid);
                }

            }
        }
        for(int i=0;i<n;i++){
            if(i==0){
                if(v[n-1]-v[0]>mid){
                    cnt+=(v[n-1]-v[0]-mid);
                    v[0]+=(v[n-1]-v[0]-mid);
                }
                else if(v[0]-v[n-1]>mid){
                    cnt+=(v[0]-v[n-1]-mid);
                    v[n-1]+=(v[0]-v[n-1]-mid);
                }
            }
            else{
                if(v[i-1]-v[i]>mid){
                    cnt+=(v[i-1]-v[i]-mid);
                    v[i]+=(v[i-1]-v[i]-mid);
                }
                else if(v[i]-v[i-1]>mid){
                    cnt+=(v[i]-v[i-1]-mid);
                    v[i-1]+=(v[i]-v[i-1]-mid);
                }

            }
        }

        for(int i=n-1;i>=0;i--){
            if(i==0){
                if(v[n-1]-v[0]>mid){
                    cnt+=(v[n-1]-v[0]-mid);
                    v[0]+=(v[n-1]-v[0]-mid);
                }
                else if(v[0]-v[n-1]>mid){
                    cnt+=(v[0]-v[n-1]-mid);
                    v[n-1]+=(v[0]-v[n-1]-mid);
                }
            }
            else{
                if(v[i-1]-v[i]>mid){
                    cnt+=(v[i-1]-v[i]-mid);
                    v[i]+=(v[i-1]-v[i]-mid);
                }
                else if(v[i]-v[i-1]>mid){
                    cnt+=(v[i]-v[i-1]-mid);
                    v[i-1]+=(v[i]-v[i-1]-mid);
                }

            }
        }

        for(int i=n-1;i>=0;i--){
            if(i==0){
                if(v[n-1]-v[0]>mid){
                    cnt+=(v[n-1]-v[0]-mid);
                    v[0]+=(v[n-1]-v[0]-mid);
                }
                else if(v[0]-v[n-1]>mid){
                    cnt+=(v[0]-v[n-1]-mid);
                    v[n-1]+=(v[0]-v[n-1]-mid);
                }
            }
            else{
                if(v[i-1]-v[i]>mid){
                    cnt+=(v[i-1]-v[i]-mid);
                    v[i]+=(v[i-1]-v[i]-mid);
                }
                else if(v[i]-v[i-1]>mid){
                    cnt+=(v[i]-v[i-1]-mid);
                    v[i-1]+=(v[i]-v[i-1]-mid);
                }

            }
        }
        
        if(cnt<=k){
            high=mid-1;
            ans=mid;
        }
        else{
            low=mid+1;
        }


     }
     cout<<ans<<endl;

}
return 0;}