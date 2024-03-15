/* Mahady Hasan Fahim
Github:FmahadyBD

*/

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
#include <queue>
#include <stack>
#include <set>
const int N = 1e5 + 10;
using namespace std;

string bd(string &s)
{
    long long a = stoll(s);
    long long ans = 0;
    int i = 0;
    while (a > 0)
    {
        ans += pow(2, i) * (a % 10);
        i++;
        a /= 10;
    }
    return to_string(ans);
}

int main()
{
    string s;
    getline(cin, s);

    string x;
    for (int i = 0; i < s.size(); i += 8)
    {
        string temp = s.substr(i, 8);
        x += bd(temp);
        x += '.';
    }

    // Remove the last dot
    x.pop_back();
    
    cout << x << endl;

    return 0;
}