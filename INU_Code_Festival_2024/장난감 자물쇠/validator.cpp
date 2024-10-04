#include <bits/stdc++.h>
#include "testlib.h"

using namespace std;

int main(int argc, char* argv[]) {
    registerValidation(argc, argv);
    int n = inf.readInt(2, 20'00'00, "n");
    set<int> s;
    inf.readSpace();
    int k = inf.readInt(1, n - 1, "k");
    inf.readEoln();
    for(int i=0;i<n;i++){
        int a_i = inf.readInt(0, n-1, "A_i");
        ensuref(s.count(a_i) == 0, "duplicate value");
        s.insert(a_i);
        if (i == n-1) {
            break;
        }
        inf.readSpace();
    }
    inf.readEoln();
    inf.readEof();
}
