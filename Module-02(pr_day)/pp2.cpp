/*
Problem Name: 
Problem Link: 
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n; cin >> n;
    int *a = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int m; cin >> m;
    int *b = new int[m];
    for (int i = 0; i < n; i++) {
        b[i] = a[i];
    }
    for (int i = n; i < m; i++) {
        cin >> b[i];
    }
    for (int i = 0; i < m; i++) {
        cout << b[i] << " ";
    } cout << "\n";
    return 0;
}