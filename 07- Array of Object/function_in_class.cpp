/*
Problem Name: 
Problem Link: 
*/
#include <bits/stdc++.h>
using namespace std;
class Person {
    public:
        string name, address;
        int age;
        Person(string nm, string adrs, int ag) {
            name = nm;
            address = adrs;
            age = ag;
        }
        void fun_inside_class() {
            cout << name << "\n" << address << "\n";
            cout << age << " years\n";
        }
};
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    Person alamin("Alamin Hasan", "Satkhira, Khulna, BD.", 24);
    // cout << alamin.name << "\n";
    // cout << alamin.address << "\n";
    // cout << alamin.age << " years\n";
    alamin.fun_inside_class();
    return 0;
}