#include <bits/stdc++.h>
#include "testlib.h"

int main(int argc, char* argv[]) {
    registerValidation(argc, argv);
    int n = inf.readInt(1, 20'00'00, "n");
    inf.readSpace();
    int k = inf.readInt(0, n, "k");
    inf.readSpace();
    int s = inf.readInt(1, 100, "s");
    inf.readEoln();
    while (n)
    {
        int tmp = inf.readInt(-500, 500, "Ai");
        n -= 1;
        if (n==0){
            break;
        }
        inf.readSpace();
    }
    inf.readEoln();
    inf.readEof();
}
