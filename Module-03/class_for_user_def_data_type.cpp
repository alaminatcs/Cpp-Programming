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
};
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n;
    cin >> n;
    Student info[n];
    for(int i = 0; i < n; i++) {
        char nm[100];
        cin >> nm;
        strcpy(info[i].name, nm);
        cin >> info[i].id >> info[i].batch >> info[i].section >> info[i].cgpa;
    }
    cout << "Name\t" << "ID\t" << "Batch\t" << "Sec\t" << " CGPA\n";
    for(int i = 0; i < n; i++) {
        cout << info[i].name << "\t" << info[i].id << "\t" <<  info[i].batch << "\t\t" <<  info[i].section << "\t " << info[i].cgpa << "\n";
    }
    return 0;
}