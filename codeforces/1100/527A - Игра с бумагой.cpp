#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
ios_base :: sync_with_stdio(false);
cin.tie(nullptr);
cout.tie(nullptr);
     ll a,b;
     cin>>a>>b;
     ll ans=0;
     while(a!=0 && b!=0){
        
        if(a>=b){
          ans+=a/b;
          a=a%b;
        }
        else{
          ans+=b/a;
          b=b%a;
        }
     }
     cout<<ans<<endl;
        

return 0;}
