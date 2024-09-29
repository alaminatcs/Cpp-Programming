/*
Problem Name: 
Problem Link: 
*/
#include <bits/stdc++.h>
using namespace std;

class Students {
    public:
        string nm; char s;
        int cls, mm, em;
        // Students(string name, int clas, char sec, int math, int eng) {
        //     nm = name;
        //     s = sec;
        //     cls = clas;
        //     mm = math;
        //     em = eng;
        // }
};
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n; cin >> n;
    Students *ar = new Students[n];
    for(int i = 0; i < n; i++) {
        cin >> ar[i].nm >> ar[i].cls >> ar[i].s >> ar[i].mm >> ar[i].em;
    }
    for(int i = n-1; i >= 0; i--) {
        cout << ar[i].nm << " " << ar[i].cls << " " << ar[i].s << " " << ar[i].mm << " " << ar[i].em << "\n";
    }
    return 0;
}