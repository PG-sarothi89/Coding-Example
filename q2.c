// program to print all even number from 1 to 20 using for loop.
#include <stdio.h>
int main()
{
    int i, n = 1;
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
