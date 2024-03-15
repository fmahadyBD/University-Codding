/* Mahady Hasan Fahim
Github:FmahadyBD

*/

#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<cmath>
#include<queue>
#include<stack>
#include<set>
const int N=1e5+10;
using namespace std;
string stuffing(string s){
    string ans;
    //e means escape
    //f means flag
    // in here we added the starting  flag and ending flag
    for(auto i: s){
        if(i=='e'){
            ans.push_back('e');
            ans.push_back('e');
        }else if(i=='f'){
               ans.push_back('e');
               ans.push_back('f');
        }else{
            ans.push_back(i);
        }
    }
    return 'f'+ans+'f';
}
int main()
{
    string s;
 
    getline(cin,s);
    cout<<"Before Stuffing: "<<s<<endl;
    string stu=stuffing(s);
    cout<<"After Stuffing: "<<stu<<endl;
   
   return 0;
}