 #include <bits/stdc++.h>
using namespace std;

int main() {


    int n,m;
    cin>>n>>m;
    vector<string>vs(n);
    for(int i=0;i<n;i++)cin>>vs[i];

    vector<string>d(m);
    for(int i =0;i<m;i++) cin>>d[i];


    int def ;
    cin>>def;

    map<string,int>mp;
    for(int i =0;i<m;i++){
        int price;
        cin>>price;
        mp[d[i]] =price;
    }
    int sum = 0;
    for(string x:vs){
        if(mp.count(x)){
            sum+=mp[x];
        }
        else{
            sum+=def;
        }
    }
    cout<<sum<<endl;
}