#include <stdio.h>

int main()
{


    double x = 136;
    int y;
    // printf("%[flag][width][precision][size]f",x);
    printf("%08d %8.2f\n", 136,1367.136);
    printf("%8d %8.2f\n", 136,1367.136);
    printf("%-8d %8.2f\n", 136,1367.136);
    scanf("%d", &y);
    printf("%d\n",y);
    return 0;
}