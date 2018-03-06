#include HEADER
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#if defined(BRANCH)
#define size 50000000
int res[2 * size], lhs[size], rhs[size];
#endif

int main(void)
{
#if defined(PI)
    // printf("pid: %d\n", getpid());
    // sleep(10);
    compute_pi_baseline(50000000);
#elif defined(MATRIX)
    static int array[10000][10000] = {0};
    matrix(10000, 10000, array);
#elif defined(BRANCH)
    for (size_t i = 0; i < size; ++i)
        lhs[i] = i, rhs[i] = i + (i & 1);
    merge(lhs, rhs, res, size);
#endif
    return 0;
}
