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
#include <bitset>
const int N = 1e5 + 10;
using namespace std;

string db(string &s)
{
    
    int num = stoi(s);

    bitset<8> binary(num);
     return binary.to_string();
}

int main()
{

    string ip = "192.111.222.1";
    string s;
    string x, temp;
    for (auto i : ip)
    {
        if (i == '.')
        {
            x+=(db(temp));
            temp.clear();
        }
        else
        {
            temp.push_back(i);
        }


    }
    if(!temp.empty()){
         x+=(db(temp));
    }

    cout << x << endl;

    return 0;
}