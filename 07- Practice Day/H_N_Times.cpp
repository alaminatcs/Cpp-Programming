/*
Problem Name: 
Problem Link: 
*/
#include <bits/stdc++.h>
using namespace std;

void solve_fun() {
    int n; cin >> n;
    char ch; cin >> ch;
    for(int i = 1; i < n; i++) {
        cout << ch << " ";
    }
    cout << ch << "\n";
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int tc; cin >> tc;

    while(tc--) {
        solve_fun();
    }
    return 0;
}