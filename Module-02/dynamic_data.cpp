/*
Problem Name: create dynamic data in heap memory.
Problem Link:
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int *ptr = new int;                      // syntax dynamic data create
    cin >> *ptr;
    cout << *ptr;
    return 0;
}