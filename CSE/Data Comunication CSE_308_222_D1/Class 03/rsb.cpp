#include <iostream>
#include <vector>
using namespace std;

void rsd(vector<int> &s,vector<int> &v) {
    int n=s.size();
    int co=0;
    int i=0;
    while (i < n) {
        if (s[i]==1) {
            co++;
            v.push_back(s[i]);
        
           
        }else if(co==5 && s[i]==0){
            co=0;
            i++;
            continue;
            
        }
       else{
        co=0;
        v.push_back(s[i]);
    }
        i++;
    }
}

int main() {
    vector<int> s = {1,1,1,1,1,0,1,1,1,1,1,0,1,1,1};
    vector<int> v;
    rsd(s,v);
  

    for(auto x: v){
        cout<<x<<" ";
    }
    cout << endl;
    return 0;
}
