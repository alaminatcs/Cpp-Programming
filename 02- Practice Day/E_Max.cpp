/*
Problem Name: 
Problem Link: 
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    int mx = arr[0];
    for(int i = 1; i < n; i++) {
        mx = max(mx, arr[i]);
    }
    cout << mx << "\n";
    return 0;
}