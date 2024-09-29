/*
Problem Name: 
Problem Link: 
*/
#include <bits/stdc++.h>
using namespace std;

class Cricketer {
public:
    int jersey_no; string country;
};

int main() {
    Cricketer* Dhoni = new Cricketer;
    cin >> Dhoni->jersey_no >> Dhoni->country;
    Cricketer* Kohli = new Cricketer;
    Kohli->country = Dhoni->country;
    Kohli->jersey_no = Dhoni->jersey_no; delete Dhoni;
    cout << Kohli->jersey_no << ": " << Kohli->country;
    return 0;
}