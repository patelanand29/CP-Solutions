#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(char x, ll &black , ll &white){
    if(x=='q'){
        black+=9;
    }
    else if(x=='r'){
        black+=5;
    }
    else if(x=='b'){
        black+=3;
    }
    else if(x=='n'){
        black+=3;
    }
    else if(x=='p'){
        black+=1;
    }
    else if(x=='Q'){
        white+=9;
    }
    else if(x=='R'){
        white+=5;
    }
    else if(x=='B'){
        white+=3;
    }
    else if(x=='N'){
        white+=3;
    }
    else if(x=='P'){
        white+=1;
    }
}



int main(){
ios_base :: sync_with_stdio(false);
cin.tie(nullptr);
cout.tie(nullptr);

     ll black=0,white=0;
     vector<vector<char>>v(8,vector<char>(8));
     for(int i=0;i<8;i++){
         for(int j=0;j<8;j++){
             cin>>v[i][j];
             solve(v[i][j],black,white);
         }
     }
     if(black>white){
         cout<<"Black"<<endl;
     }
     else if(white>black){
         cout<<"White"<<endl;
     }
     else{
         cout<<"Draw"<<endl;
     }


return 0;}
