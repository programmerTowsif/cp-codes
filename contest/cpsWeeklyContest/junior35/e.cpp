#include<bits/stdc++.h>
using namespace std;
int main(){

  int t;
  cin>>t;
  while (t--)
  { int n;
    cin>>n;


    int neg_count = 0;
    int has_zero =false;

    for(int i =0;i<n;i++){
        int x;
        cin>>x;
        if(x==0) has_zero = true;
        else if(x<0) neg_count++;
    }
    if(has_zero || neg_count %2 ==0) cout<<0<<endl;
    else cout<<1<<endl;
  }
  

   
}