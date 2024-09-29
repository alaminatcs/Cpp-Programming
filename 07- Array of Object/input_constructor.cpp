/*
Problem Name: 
Problem Link: 
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    //string str = "Hello World";         // 1st way
    //string str("Hello World");          // 2nd way
    //string str("hello world", 4);       // take exactly 4 char from the beginning
    /*
    string st = "hello world";            //begin after the 4 char 
    string str(st, 4);
    */
    string str(5, 'a');               // fixed no of char
    cout << str;
    return 0;
}