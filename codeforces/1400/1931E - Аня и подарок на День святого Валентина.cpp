#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
ios_base :: sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
     ll n,m;
     cin>>n>>m;
     vector<ll>v(n),count0;
     ll cnt=0;
     for(int i=0;i<n;i++){
        cin>>v[i];
        string no=to_string(v[i]);
        ll count=0;
        for(int j=no.size()-1;j>-1;j--){
            if(no[j]=='0')count++;
            else break;
        }  
        cnt+=no.size()-count;
        if(count!=0){
            count0.push_back(count);
        }

     }
     sort(count0.rbegin(),count0.rend());
     for(int i=0;i<count0.size();i++){
         if(i%2==1){
           cnt+=count0[i];
         }
     }
     if(cnt>=m+1){cout<<"Sasha\n";}
     else cout<<"Anna\n";
        
}
return 0;}
