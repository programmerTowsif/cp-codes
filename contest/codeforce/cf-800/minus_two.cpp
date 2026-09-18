#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum =0;
    for (int i =0;i<n;i++){
        int check;
        cin>>check;
        sum+=check;
    }
    if(sum>=n-1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}