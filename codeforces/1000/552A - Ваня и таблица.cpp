#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
ios_base :: sync_with_stdio(false);
cin.tie(nullptr);
cout.tie(nullptr);
ll ans=0;
int t;
cin>>t;
while(t--){
     int c1,c2,c3,c4;
     cin>>c1>>c2>>c3>>c4;
     ans+= (c3-c1+1)*(c4-c2+1);
    
}
cout<<ans<<endl;
return 0;}
