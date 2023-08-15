/*
Problem Name: Class for creating user defined data type.
Problem Link: 
*/
#include <bits/stdc++.h>
using namespace std;

class Student {
    public:
        char name[100];
        int id;
        int batch;
        char section;
        float cgpa;
        
        //constructor name should be same as class name
        Student(char *n, int i, int b, char s, float c) {
            strcpy(name, n);
            id = i; batch = b; section = s; cgpa = c;
        }
};

Student fun() {
    char nm[100]; int id, bat; char sec; float cg;
    cin >> nm >> id >> bat >> sec >> cg;
    Student inf(nm, id, bat, sec, cg);
    return inf;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n;
    cin >> n;
    cout << "Name\t" << "ID\t" << "Batch\t" << "Sec\t" << " CGPA\n";
    for(int i = 0; i < n; i++) {
        Student info = fun();
        cout << info.name << "\t" << info.id << "\t" <<  info.batch << "\t\t" <<  info.section << "\t " << info.cgpa << "\n";
    }
    return 0;
}