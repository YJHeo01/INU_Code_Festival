#include "testlib.h"
#include <vector>

int main(int argc, char* argv[]) {
    registerGen(argc, argv, 1);

    int N = rnd.next(2, 20'00'00);
    int k = rnd.next(1, N - 1);
    printf("%d %d\n", N, k);
    std::vector<int> A(N);

    for (int i = 0; i < k; i++) {
        int length = N / k;
        if (N % k > i) length++;
        std::vector<int> tmp(length);
        for (int j = 0; j < length; j++) tmp[j] = j;
        shuffle(tmp.begin(), tmp.end());
        for (int j = 0; j < length; j++) {
            A[j * k + i] = tmp[j] * k + i;
        }
    }

    for (int i = 0; i < N; i++) {
        if (i) printf(" ");
        printf("%d", A[i]);
    }
    printf("\n");

    return 0;
}
