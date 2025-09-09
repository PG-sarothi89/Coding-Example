// WAP to print all odd number from 1 to 20 using for loop.
#include <stdio.h>
int main()
{
    int i, n = 2;
    for (i = 1; i <= 20; i++)
    {
        if (i == n)
        {
            n = n + 2;
            continue;
        }
        printf("%d\n", i);
    }
}