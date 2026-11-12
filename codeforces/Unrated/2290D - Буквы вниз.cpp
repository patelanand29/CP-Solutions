#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
ios_base :: sync_with_stdio(false);
cin.tie(nullptr);
cout.tie(nullptr);
int t;
cin >> t;
while (t --)
{
     ll n;
     cin>>n;
     string s;
     cin>>s;
     map<char,char>mp;

      for (char ch='a'; ch<='z';ch++) {
           mp[ch]=ch;
        }
      
      int cnt=0;

      for(int i=0;i<n/2;i++){
        
         if(mp[s[i]]==mp[s[n-1-i]])continue;

         else if(mp[s[i]]>mp[s[n-1-i]]){
            
            int c=0;
            while(mp[s[i]-c]!=mp[s[n-1-i]]){
                if(mp[s[i]-c]==s[i]-c)cnt++;
                c++;
                mp[s[i]]=mp[s[i]-c];
            }
            for( char ch=s[n-1-i] ; ch<=s[i] ;ch++){
                if(mp[ch]>mp[s[n-1-i]]) mp[ch]=mp[s[n-1-i]];
            }
         }
         else{
            int c=0;
             while(mp[s[i]]!=mp[s[n-1-i]]){
                if(mp[s[n-1-i]-c] == s[n-1-i]-c) cnt++;
                c++;
                mp[s[n-1-i]]=mp[s[n-1-i]-c];
            }
            for( char ch=s[n-1-i] ; ch>=s[i] ;ch--){
               if(mp[ch]>mp[s[i]])  mp[ch]=mp[s[i]];
            }
         }


      }

      cout<<cnt<<endl;

}
return 0;} 