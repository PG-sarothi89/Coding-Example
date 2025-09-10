// how many times neso will be printed
#include <stdio.h>
int main()
{

    int i = -5;
    while (i <= 5)
    {
        if (i >= 0)
        {
            break;
        }
        else
        {
            i++;
            continue;
        }
        printf("neso\n");
    }
}
// The output will be nothing. The loop increments 'i' from -5 to 0, and when 'i' becomes 0, the break statement is executed, exiting the loop before "neso" can be printed.
