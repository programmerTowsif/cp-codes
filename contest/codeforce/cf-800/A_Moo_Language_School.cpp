#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n , k;
        cin>>n>>k;
        string s;
        cin>>s;
        int ans = 0;
    for(int i =0;i<n/k;i++){
        int l =i+1;
        bool has_non_nhoj_farm = false;
        for(int j =i*k;j<k*l;j++){
            if(s[j] == '0') has_non_nhoj_farm = true;
        }
       ans+=!has_non_nhoj_farm;
    }

    cout<<ans<<endl;
    }
   
}