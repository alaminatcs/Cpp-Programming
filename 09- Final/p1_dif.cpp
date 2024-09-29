#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc; cin >> tc;
    for (int i = 0; i < tc; i++)
    {
        string s, x; cin >> s >> x;

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
                    for (int j = 0; j < x.size(); j++)
                    {
                        if (s[i + j] != x[j])
                        {
                            flag = 1; break;
                        }
                    }
                }
                if (flag == 0) {
                    s.replace(s.begin()+i, s.begin()+i+x.size(), "#");
                    i = i - x.size();
                }
            }
        }
        cout << s << "\n";
    }
    return 0;
}
