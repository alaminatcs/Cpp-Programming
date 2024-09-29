#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc; cin >> tc;
    for (int i = 0; i < tc; i++)
    {
        string s, x; cin >> s >> x;
        string res = "";
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == x[0])
            {
                int flag = 0;
                int range = i + x.size() - 1;

                if (range > s.size()-1) {
                    flag = 1;
                }
                else {
                    for (int j = 1; j < x.size(); j++)
                    {
                        if (s[i + j] != x[j])
                        {
                            flag = 1; break;
                        }
                    }
                }
                
                if (flag == 1) {
                    res.push_back(s[i]);
                }
                else
                {
                    res.push_back('#');
                    i = i + x.size()-1;
                }
            }
            else {
                res.push_back(s[i]);
            }
        }
        cout << res << "\n";
    }
    return 0;
}
