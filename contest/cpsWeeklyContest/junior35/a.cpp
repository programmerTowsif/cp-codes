#include <iostream>
#include <vector>

using namespace std;

int main() {
  
 
    vector<int> v;
    int temp;
    
    // Control + Z (Windows) / Control + D (Linux/Mac) na dewa porjonto input nibe
    while (cin >> temp) {
        v.push_back(temp);
        if (cin.peek() == '\n') break;
    }
     
    for(int i=0; i<v.size()-1; i++){
        if(v[i] >v[i+1] || v[i] %25 !=0 || v[i+1] %25 != 0)  {
            cout<<"No\n";
           return 0;
           
        }
    }
   cout<<"Yes\n";
    return 0;
}