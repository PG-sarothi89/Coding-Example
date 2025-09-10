// What will be the output of the following code?
#include <stdio.h>

int main()
{
    int i;
    for (i = 0; i < 20; i++)
    {
        switch (i)
        {
        case 0:
            i += 5;
        case 1:
            i += 2;
        case 5:
            i += 5;
        default:
            i += 4;
        }

       
    }
    printf("%d\n", i);
    return 0;
}
// The output will be 20. The loop increments 'i' in such a way that it eventually reaches 20 and exits the loop.   
    