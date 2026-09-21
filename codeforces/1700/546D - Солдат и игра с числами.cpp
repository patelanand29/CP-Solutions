#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
ios_base :: sync_with_stdio(false);
cin.tie(NULL);
vector<bool>prime(5000001,true);
vector<ll>count(5000001,0);
prime[0]=false,prime[1]=false;

for(int i=2; i<5000001 ;i++){
    if(prime[i]==true){
        for(int j=i;j<5000001;j+=i){
            prime[j]=false;
            ll x=i,y=j;
            while(y%x==0){
                y/=x;
                count[j]++;
            }
            
        }
    }
}

for(int i=1;i<5000001;i++){
     count[i]+=count[i-1];
}

int t;
cin>>t;
while(t--){
     ll a,b;
     cin>>a>>b;
     
     cout<<count[a]-count[b]<<endl;
}
return 0;}
