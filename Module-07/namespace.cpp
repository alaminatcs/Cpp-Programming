/*
Problem Name: 
Problem Link: 
*/
#include <bits/stdc++.h>
using namespace std;
namespace nsp_one {
    int nsp_var = 300;
    string nsp_str = "hello world";
    void nsp_fun() {
        cout << "function inside nsp_one\n";
    }
    class Nsp_cls {
        public:
            int nsp_cls_var;
            string nsp_cls_str;
            Nsp_cls(int var, string str) {
                nsp_cls_var = var;
                nsp_cls_str = str;
            }
    };
};
namespace nsp_two {
    int nsp_var2 = 302;
    string nsp_str2 = "hello world two";
    void nsp_fun2() {
        cout << "function inside nsp_one\n";
    }
};
using namespace nsp_one;
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    cout << nsp_var << "\n";
    cout << nsp_two::nsp_str2 << "\n";
    Nsp_cls *nsp_obj = new Nsp_cls(14126, "Alamin Hasan");
    cout << nsp_obj->nsp_cls_str << " id no is: " << nsp_obj->nsp_cls_var << "\n";
    return 0;
}