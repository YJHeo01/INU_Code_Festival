#include <bits/stdc++.h>
#include "testlib.h"

using namespace std;


bool check_duplicate(int x, int y, int a, int b) {
    if (a == x && b == y) {
        return true;
    }
    return false;
}

int main(int argc, char* argv[]) {
    registerValidation(argc, argv);
    int a = inf.readInt(0, 100'000'000-1, "a");
    inf.readSpace();
    int b = inf.readInt(0, 100'000'000-1, "b");
    inf.readEoln();
    ensuref(!check_duplicate(a, b, 0, 0), "A duplicated O\n");
    int x = inf.readInt(0, 100'000'000-1, "x");
    inf.readSpace();
    int y = inf.readInt(0, 100'000'000-1, "y");
    ensuref(!check_duplicate(a, b, 0, 0), "B duplicated O\n");
    ensuref(!check_duplicate(a, b, x, y), "A duplicated B\n");
    inf.readEoln();
    inf.readEof();
}
