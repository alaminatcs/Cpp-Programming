/*
Problem Name: 
Problem Link: 
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    string str;
    cin >> str;
    cout << "before sort: " << str << "\n";
    sort(str.begin(), str.end());
    cout << "after sort: " << str;
    return 0;
}