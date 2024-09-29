/*
Problem Name: 
Problem Link: 
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    char ch;
    cin >> ch;
    if(isdigit(ch)) cout << "IS DIGIT\n";
    else if(isalpha(ch)) {
        cout << "ALPHA\n";
        if(ch>='a' && ch<='z') cout << "IS SMALL\n";
        else cout << "IS CAPITAL\n";
    }
    return 0;
}