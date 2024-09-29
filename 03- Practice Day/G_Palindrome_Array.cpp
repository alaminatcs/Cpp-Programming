/*
Problem Name: 
Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/G
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n;
    scanf("%d", &n);
    int ar[n];
    for(int i=0; i<n; i++) scanf("%d", &ar[i]);
    int rem = 1;
    for(int i=0, j=n-1; i<j; i++, j--) {
        if(ar[i] != ar[j]) {
            rem = 0; break;
        }
    }
    if(rem) printf("YES\n");
    else printf("NO\n");
    return 0;
}