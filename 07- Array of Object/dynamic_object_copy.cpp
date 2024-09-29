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
        Person(string name, string address, int age) {
            this->name = name;
            this->address = address;
            this->age = age;
        }
        void fun_inside_class() {
            cout << name << "\n" << address << "\n";
            cout << age << " years\n";
        }
};
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    Person *alamin = new Person("Alamin Hasan", "Satkhira, Khulna, BD.", 24);
    Person *shakib = new Person("Shakib Hasan", "Satkhira, Khulna, BD.", 17);
    *alamin = *shakib;      //if we don't use * it will replace path then we can't find anything in alamin after deleting shakib
    //alamin->address = shakib->address         //this is we can copy also one by one
    delete shakib;
    cout << alamin->address << "\n";
    return 0;
}