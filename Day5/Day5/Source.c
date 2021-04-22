#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();



int main()
{
    int n, i, result;
    scanf_s(" %d", &n);
    for (i = 1; i <= 10; i++) {
        result = n * i;
        printf("%d x %d = %d \n", n, i, result);
    }
    return 0;
}
