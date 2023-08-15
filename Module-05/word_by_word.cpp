/*
Problem Name: 
Problem Link: 
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    string str;
    getline(cin, str);
    stringstream strstrm;
    strstrm << str;
    string word;
    while(strstrm >> word) {
        cout << word << "\n";
    }
    return 0;
}