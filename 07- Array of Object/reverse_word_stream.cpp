/*
Problem Name: 
Problem Link: 
*/
#include <bits/stdc++.h>
using namespace std;
void fun_rev(stringstream &strm) {          //for class data type & used as ref
    string word;
    if(strm >> word) {
        fun_rev(strm);
        cout << word << "\n";
    }
}
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    string str;
    getline(cin, str);
    stringstream strm(str);
    fun_rev(strm);
    return 0;
}