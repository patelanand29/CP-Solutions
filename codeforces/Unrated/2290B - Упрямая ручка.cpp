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
     string s;
     cin>>s;
     
     int cnt=0;
     bool laal=true;

     for(int i=0;i<n;i++){
        if(laal && s[i]=='R') laal=false;
        else if(laal && s[i]=='B'){
               cnt++;
        } 
        else if(!laal && s[i]=='B'){
            laal=true;
        }
        else{
            cnt++;
        }
     }

     cout<<cnt<<endl;
}
return 0;}