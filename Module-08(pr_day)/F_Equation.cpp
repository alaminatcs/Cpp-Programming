/*
Problem Name: 
Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/F
*/
#include <bits/stdc++.h>
using namespace std;

long long fun_solve(int x, int n) {
    long long mul = 1;
    while(n--) {
        mul *= x;
    }
    return mul;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int x, n; cin >> x >> n;
    
    long long sum = 0;
    for(int i = 2; i <= n; i += 2) {
        sum += fun_solve(x, i);
    }
    cout << sum << "\n";
    return 0;
}