/*
Problem Name: 
Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/Q
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    string str;
    getline(cin, str);
    stringstream strm(str);
    int count = 0;
    strm >> str;
    while(1) {
        reverse(str.begin(), str.end());
        cout << str;
        if(strm >> str) cout << " ";
        else break;
    }
    cout << "\n";
    return 0;
}