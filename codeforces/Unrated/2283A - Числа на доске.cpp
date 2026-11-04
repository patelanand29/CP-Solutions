#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
int main(){
ios_base :: sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
     ll l,r;
     cin>>l>>r;

     if(l==0 && r==0){
         cout<<0<<endl;
     }
     else if(l==0){
        cout<<r-1<<endl;
     }

     else if(r==0){
        cout<<abs(l)-1<<endl;
     }

     else if(abs(l)==abs(r))cout<<0<<endl;

     else if(l<0 && r>0){
         cout<<max(abs(l),r)-min(abs(l),r) -1 <<endl;
     }
     else cout<<abs(l-r)<<endl;
    
        
}
return 0;}