#include <stdio.h>
#include <string.h>
// Checking input characters
int main()
{
    char *str;
    // Taking string from the user
    printf("Enter the String: ");
    scanf("%s", str);
    // Finding the length of the string
    int length = strlen(str);
    int s_alpha = 0, c_alpha = 0, digit = 0, symbol = 0;
    // Counting the Characters
    for (int i = 0; i < length; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            s_alpha++;
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            c_alpha++;
        }
        else if (str[i] >= '0' && str[i] <= '9')
        {
            digit++;
        }
        else
        {
            symbol++;
        }
    }
    // Printing the values
    printf("The number of small alphabets is :%d\n", s_alpha);
    printf("The number of Capital alphabets is :%d\n", c_alpha);
    printf("The number of digits is :%d\n", digit);
    printf("The number of Special characters is :%d\n", symbol);
    return 0;
}