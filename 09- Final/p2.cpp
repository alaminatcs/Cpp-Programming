#include <bits/stdc++.h>
using namespace std;

int solve_fun()
{
    string s, word;
    getline(cin, s);
    stringstream strm(s);
    while(strm >> word) {
        if(word == "Ratul") return 1;
    }
    return 0;
}

int main()
{
    // Write your code here
    if(solve_fun()) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}