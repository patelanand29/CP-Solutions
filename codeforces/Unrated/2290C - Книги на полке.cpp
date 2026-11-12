#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
ios_base :: sync_with_stdio(false);
cin.tie(nullptr);
cout.tie(nullptr);
int t;
cin >> t;
while (t -- )
{
     ll n;
     cin>>n;
     vector<ll>v(n);
     for(int i=0;i<n;i++){
        cin>>v[i];     }

    sort(v.begin(),v.end());
    
    vector<ll>ans(n);
    int cnt=0,cnt1=n-1;

    ll anscnt=0;

    for(int i=0;i<n;i++){
        if(i%2==0){
            ans[cnt]=v[i];
            cnt++;
        }
        else{
            ans[cnt1]=v[i];
            cnt1--;
        }
    }
    for(int i=0;i<(n+1)/2;i++){
        if(i==0)anscnt++;
        else if(ans[i]>ans[i-1])anscnt++;
    }
    for(int i=(n+1)/2;i<n;i++){
        if(i==n-1)anscnt++;
        else if(ans[i]>ans[i+1])anscnt++;
    }
    cout<<anscnt<<endl;
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";     }
    cout<<endl;
}
return 0;}