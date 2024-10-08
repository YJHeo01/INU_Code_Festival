#include "testlib.h"
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char* argv[]) {
	registerGen(argc, argv, 1);
	int n = rnd.next(2, 200000);
	int k = rnd.next(0, n);
	int s = rnd.next(1, 100);
	printf("%d %d %d\n", n, k, s);
	for (int i = 1; i < n; i++) {
		printf("%d ", rnd.next(-500, 500));
	}
	printf("%d\n", rnd.next(-500, 500));
}
