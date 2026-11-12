#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
int main(){
ios_base :: sync_with_stdio(false);
cin.tie(NULL);

     ll t;
     cin>>t;
     while(t--){

     vector<ll>v(3);
     for(int i=0;i<3;i++)cin>>v[i];

     sort(v.begin(),v.end());

     if(v[0]+1==v[1] && v[1]+1==v[2])cout<<"YES"<<endl;
     else cout<<"NO"<<endl;
     

}

return 0;}