/*
Problem Name:
Problem Link:
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    cout << "Min is: " << min(a, min(b, c)) << "\n";
    cout << "Max is: " << max(a, max(b, c)) << "\n";  
    return 0;
}