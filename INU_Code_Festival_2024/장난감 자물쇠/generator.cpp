#include "testlib.h"
#include <vector>

int main(int argc, char* argv[]) {
    registerGen(argc, argv, 1);

    int N = rnd.next(2, 20'00'00);
    int k = rnd.next(1, N - 1);
    printf("%d %d\n", N, k);
    std::vector<int> A(N);

    for (int i = 0; i < N; i++) A[i] = i;

    shuffle(A.begin(), A.end());

    for (int i = 0; i < N; i++) {
        if (i) printf(" ");
        printf("%d", A[i]);
    }
    printf("\n");

    return 0;
}
