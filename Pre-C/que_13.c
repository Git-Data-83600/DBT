/*
Q13. Declare an Array of type char* and initialize it with a few strings (hard-
coded). Display the strings which are duplicated in that array. (Hint: use
strcmp())
*/
#include <stdio.h>
#include <string.h>
// comparing strings
void findDuplicates(char *strings[])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = i + 1; j < 4; j++)
        {
            if (!strcmp(strings[i], strings[j]))
            {
                printf("Duplcate is: %s ", strings[i]);
                break;
            }
        }
    }
}
int main()
{
    char *arr[] = {"Balkisan", "Vishwakarma", "Sunbeam", "Balkisan"};
    findDuplicates(arr);
    return 0;
}
