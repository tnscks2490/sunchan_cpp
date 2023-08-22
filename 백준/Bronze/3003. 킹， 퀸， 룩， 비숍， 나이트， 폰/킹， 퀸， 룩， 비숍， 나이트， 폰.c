#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int C[6] = {0,};
    int a;
    for (int i = 0; i < 6;i++) {
        scanf("%d", &a);
        C[i] = a;
    }
    printf("%d %d %d %d %d %d", 1 - C[0], 1 - C[1], 2 - C[2], 2 - C[3], 2 - C[4], 8 - C[5]);
    return 0;
}