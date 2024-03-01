#include <iostream>
#include <vector>
#include <string>
#include <math.h>
#include <stack>
#include <queue>
#include <algorithm>
using namespace std;
#define vi vector<int>
#define pi pair<int, int>
#define vii vector<pi>
#define rep(i, a, n) for (int i = a; i < n; i++)
/*
--> Mahady Hasan Fahim
--> Github:fmahadyBD


*/


string bs(const string& data, const string& f, const string& e) {
    string op; 
    size_t pos=0; 
    while (pos<data.size()) {
            if (data.substr(pos,f.size())==f||data.substr(pos, e.size())==e) {          
            op+=e;
            op+=data[pos];
            pos++;
        } else {
           op+=data[pos];
            pos++;
        }
    } 
    return op;
}

signed  main() {
    string data; 
    string FLAG = "GALF"; 
    string ESCAPE = "ESCAPE";
    int n;
    cout<<"Enter the test case:";
    cin>>n;
    while(n--){
    cout << "Enter messange: ";
    getline(cin, data);
    string outp = bs(data, FLAG, ESCAPE); 
    cout<<"Output\n";  
    cout <<data<< " This is some data: " << outp <<" Data: "<<data<< endl;
    }
    
    return 0; 
}
