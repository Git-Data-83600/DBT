#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
    // Declaring and initializing the maximum no.
    int max = 0;
    // Iterating through the all numbers to find maximum.
    for (int i = 0; i < argc; i++)
    {
        if (atoi(argv[i]) > max)
            max = atoi(argv[i]);
    }
    // Printing the greatest number.
    printf("The greatest number is %d\n", max);
    return 0;
}