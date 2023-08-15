/*
Problem Name: 
Problem Link: 
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++) scanf("%d ", &arr[i]);
    for(int i = 0; i < n-1; i++) {
        for(int j = i+1; j < n; j++) {
            if(arr[i] > arr[j]) swap(arr[i], arr[j]);
        }
    }
    for(int i = 0; i < n; i++) printf("%d ", arr[i]);
    return 0;
}