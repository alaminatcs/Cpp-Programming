/*
Problem Name: 
Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/P
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    string str;
    getline(cin, str);
    stringstream strm(str);
    int count = 0;
    for(int i = 0; i < str.size(); i++) {
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z')) {
            while((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z')) i++;
            count++;
            i--;
        }
    }
    cout << count << "\n";
    return 0;
}