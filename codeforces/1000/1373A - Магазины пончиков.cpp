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
     ll x,a,b;
     cin>>x>>a>>b;
     if(x*a<=b){
        cout<<1<<" "<<-1<<endl;
     }
     else if(b<=x){
        cout<<-1<<" "<<a<<endl;
     }
     else{
        cout<<1<<" "<<a<<endl;
     }
}
return 0;}
