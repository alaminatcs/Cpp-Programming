/*
Problem Name: 
Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/V
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int a, b;
    char s;
    cin >> a >> s >> b;
    if(a>b && s=='>')
        cout << "Right\n";
    else if(a<b && s=='<')
        cout << "Right\n";
    else if(a==b && s=='=')
        cout << "Right\n";
    else
        cout << "Wrong\n";
    return 0;
}