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
string destuffing(const string& s) {
    string ans;
    for (int i = 1; i < s.length() - 1; ++i) { 
        char c = s[i];
        if (c == 'e') { 
            char next = s[i + 1];
            if (next == 'e' || next == 'f') { 
                ans.push_back(next);
                ++i; 
            }
        } else { 
            ans.push_back(c);
        }
    }
    return ans;
}
int main()
{
    string s;
 
    getline(cin,s);
    cout<<"Before destuffing: "<<s<<endl;
    string stu=destuffing(s);
    cout<<"After Destuffing: "<<stu<<endl;
   
   return 0;
}