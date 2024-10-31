#include "testlib.h"
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char* argv[]) {
	registerGen(argc, argv, 1);
	int a = 0, b = 0, x = 0, y = 0;
	int height_limit = opt<int>(1);
	int weight_limit = opt<int>(2);
	
	while (true)
	{
		a = rnd.next(0, height_limit), b = rnd.next(0, weight_limit);
		if (a != 0 || b != 0) {
			break;
		}
	}

	while (true)
	{
		x = rnd.next(0, height_limit), y = rnd.next(0, weight_limit);
		if (x == 0 && y == 0) {
			continue;
		}
		if (x != a || y != b) {
			break;
		}

	}

	printf("%d %d\n", a, b);
	printf("%d %d\n", x, y);
}
