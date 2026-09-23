#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
ios_base :: sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
     ll n;
     cin>>n;
     vector<ll>v(n),vec1,vec2;
     for(int i=0;i<n;i++){
        cin>>v[i];
        if(vec1.size()==0 || (vec2.size()==0 && v[i]<=vec1[vec1.size()-1])){
           vec1.push_back(v[i]);
        }
        else if(vec2.size()==0){
           vec2.push_back(v[i]);
        }
        else if((v[i]>vec1[vec1.size()-1] && v[i]>vec2[vec2.size()-1])||(v[i]<=vec1[vec1.size()-1] && v[i]<=vec2[vec2.size()-1])){
           if(vec1[vec1.size()-1]<=vec2[vec2.size()-1]){
                vec1.push_back(v[i]);
           }
           else vec2.push_back(v[i]);
        }
        else if(v[i]>vec1[vec1.size()-1] && v[i]<=vec2[vec2.size()-1]){
                vec2.push_back(v[i]);
        }
        else if(v[i]<=vec1[vec1.size()-1] && v[i]>vec2[vec2.size()-1]){
                vec1.push_back(v[i]);
        }
    }
    ll ans=0;
    if(vec1.size()>1){
    for(int i=0;i<vec1.size()-1;i++){
        if(vec1[i]<vec1[i+1])ans++;
    }
}
    if(vec2.size()>1){
         for(int i=0;i<vec2.size()-1;i++){
           if(vec2[i]<vec2[i+1])ans++;
          }
       }
    cout<<ans<<endl;

}
return 0;}
