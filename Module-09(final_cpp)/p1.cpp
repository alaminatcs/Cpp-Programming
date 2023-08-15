#include <bits/stdc++.h>
using namespace std;

void solve_fun()
{
    string s, x;
    cin >> s >> x;
    string copy = "";
    for (unsigned int i = 0; i < s.size(); i++)
    {
        if (s[i] == x[0])
        {
            int rem = 0;
            if (i + x.size()-1 > s.size()-1) rem = 1;
            else
            {
                for (unsigned int j = 0; j < x.size(); j++)
                {
                    if (s[i + j] != x[j])
                    {
                        rem = 1;
                        break;
                    }
                }
            }
            if (rem) copy.push_back(s[i]);
            else
            {
                copy.push_back('$');
                i += x.size()-1;
            }
        }
        else copy.push_back(s[i]);
    }
    cout << copy << "\n";
    getchar();
}

int main()
{
    // Write your code here
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve_fun();
    }
    return 0;
}
