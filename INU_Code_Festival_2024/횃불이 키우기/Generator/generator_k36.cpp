#include "testlib.h"
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char* argv[]) {
	registerGen(argc, argv, 1);
	int n = opt<int>(1);
	int k = 36;
	int s = rnd.next(1, 10);
	printf("%d %d %d\n", n, k, s);
	for (int i = 1; i < n; i++) {
		printf("%d ", rnd.next(-500, 500));
	}
	printf("%d\n", rnd.next(-500, 500));
}
