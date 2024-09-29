/*
Problem Name: 
Problem Link: 
*/
#include <bits/stdc++.h>
using namespace std;

int* get_array(int n) {
    int *ar = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> ar[i];
    } return ar;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n; cin >> n;
    int*ar = get_array(n);
    for (int i = 0; i < n; i++) {
        cout << ar[i] << " ";
    } cout << "\n";
    return 0;
}