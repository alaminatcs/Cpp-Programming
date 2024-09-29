#include <bits/stdc++.h>
using namespace std;
class Person {
    public:
        string name;
        float height;
        int age;
        Person(string nam, float hght, int ag) {
            name = nam;
            height = hght;
            age = ag;
        }
};
int main() {
    Person *p1 = new Person("Alamin", 5.7, 24);
    Person *p2 = new Person("Fardin", 5.6, 29);
    if(p1->age > p2->age) cout << p1->name;
    else cout << p2->name;
    return 0;
}