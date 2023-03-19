#include "stdio.h"

int fun(int n)
{
    static int sum = 1;
    int i;
    for (i = 1; i <= n; i++)
    {
        sum += i;
    }
    return sum;
}

int main(int argc, char const *argv[])
{
    int s = 0;
    s = fun(1) + fun(2);
    printf("%d", s);
    return 0;
}
