/*
Problem Name: 
Problem Link: 
*/
#include <bits/stdc++.h>
using namespace std;

class Student {
public:
    string name, sec;
    int roll, math_marks;
    Student (string n, string s, int r, int m) {
        this->name = n; this->roll = r;
        this->sec = s; this->math_marks = m;
    }
};
int main() {
    string n, s; int r, m;
    cin >> n >> r >> s >> m;
    Student a = Student(n, s, r, m);

    cin >> n >> r >> s >> m;
    Student b = Student(n, s, r, m);

    cin >> n >> r >> s >> m;
    Student c = Student(n, s, r, m);
    
    int mx = a.math_marks; string nm = a.name;
    if (mx < b.math_marks) {
        mx = b.math_marks; nm = b.name;
    }
    if (mx < c.math_marks) {
        mx = c.math_marks; nm = c.name;
    }
    cout << nm << "'s mark is: " << mx;
    return 0;
}