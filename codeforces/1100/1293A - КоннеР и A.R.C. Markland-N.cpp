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
     ll n,s,k;
     cin>>n>>s>>k;
     vector<ll>v(k);
     for(int i=0;i<k;i++){
        cin>>v[i]; 
        v[i]--;} 
    sort(v.begin(),v.end());
     s--;
     bool flag=true;
     ll idx=-1;
     for(int i=0;i<k;i++){
         if(v[i]==s){
             flag=false;
             idx=i;
             break;
         }
     }
     if(flag){
        cout<<0<<endl;
     }
     else{
          ll l=idx,r=idx;

          while(l>=0 && r<v.size()){
               if(l>=1){
                    if(v[l-1]==v[l]-1){l--;}
                    else{
                        cout<<abs(v[l]-1-s)<<endl;
                        break;
                    } 
               }
               else if(l==0 && v[l]!=0){
                    cout<<abs(v[l]-1-s)<<endl;
                    break;
               }

               if(r<v.size()-1){
                    if(v[r+1]==v[r]+1){r++;}
                    else{
                        cout<<abs(v[r]+1-s)<<endl;
                        break;
                    } 
               }
               else if(r==v.size()-1 && v[r]!=n-1){
                    cout<<abs(v[r]+1-s)<<endl;
                    break;
               }
          }
     }
        
}
return 0;}
