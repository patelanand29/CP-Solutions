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

    //Binary search method kra hai is baar last time with greedy done

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
        ll low=0,high=1e18;
        ll x=INT_MAX;
        while(low<=high){
            ll mid=(low+high)/2;
            if(mid+sum>v[n/2]*2*n){
                x=mid;
                high=mid-1;
            }
            else low=mid+1;
        }
        cout<<x<<endl;
     }
        
}
return 0;}
