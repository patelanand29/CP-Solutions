#include <bits/stdc++.h>
using namespace std;
#define ll long long 
int main() {
ll r1,r2,c1,c2,d1,d2;
cin>>r1>>r2;
cin>>c1>>c2;
cin>>d1>>d2;
bool val=false;
for(int i=1; i<=9; i++){
    for(int j=1; j<=9; j++){
        if(i==j)continue;
        for(int k=1; k<=9; k++){
            if(k==i || k==j)continue;
            for(int l=1; l<=9; l++){
                if(l==i || l==k || l==j)continue;
                if((i+j)==r1 && (k+l)==r2 && (i+l)==d1 && (k+j)==d2 && (i+k)==c1 && (l+j)==c2 ){
                    val=true; r1=i; c1=j; r2=k; c2=l; break;
                }
                
                
            }
        }
    }
}
    if(val){
        cout<<r1<<" "<<c1<<endl;
        cout<<r2<<" "<<c2;
    }else{
        cout<<-1<<endl;
    }


}
