#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        
    int n;
	cin>>n;
	vector<int>v(n);
	for(int i=0;i<n;i++){
	    cin>>v[i];
	}
	
	vector<int>v1,v2,v3,v4;
	
	for(int i=0;i<n;i++){
	   
	   if(i<n/2){
	       if(v[i]<=n/2){
	           v1.push_back(v[i]);
	       }
	       else v3.push_back(v[i]);  
	   }
	   else if(i>=n/2){
	       if(v[i]>n/2){
	           v2.push_back(v[i]);
	       }
	       else v4.push_back(v[i]);
	   }
	}
	
	if(v1.size()==n/2){
	    cout<<1<<endl;
	    cout<<n<<" ";
	    for(int i=0;i<v1.size();i++){
	        cout<<v1[i]<<" ";
	    }
	    for(int i=0;i<v2.size();i++){
	        cout<<v2[i]<<" ";
	    }
	    cout<<endl;
	    
	}
	else if(v3.size()==n/2){
	    cout<<1<<endl;
	    cout<<n<<" ";
	    for(int i=0;i<v3.size();i++){
	        cout<<v3[i]<<" ";
	    }
	    for(int i=0;i<v4.size();i++){
	        cout<<v4[i]<<" ";
	    }
	    cout<<endl;
	    
	}
	else{
	    cout<<2<<endl;
	    cout<<v1.size()+v2.size()<<" ";
	    for(int i=0;i<v1.size();i++){
	        cout<<v1[i]<<" ";
	    }
	    for(int i=0;i<v2.size();i++){
	        cout<<v2[i]<<" ";
	    }
	    cout<<endl;
	    cout<<v3.size()+v4.size()<<" ";
	    for(int i=0;i<v3.size();i++){
	        cout<<v3[i]<<" ";
	    }
	    for(int i=0;i<v4.size();i++){
	        cout<<v4[i]<<" ";
	    }
	    cout<<endl;
	    
	}
	
	
	
        
    }
	

}
