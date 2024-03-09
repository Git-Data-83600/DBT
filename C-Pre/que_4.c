#include <stdio.h>
// Grade of Student
int main()
{
    // Taking marks from user
    int sub[4], total_marks = 0;
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the marks of Subject %d: ", i + 1);
        scanf("%d", &sub[i]);
        // Calculating Total
        total_marks += sub[i];
    }
    // Assigning and printing Grade according to total marks
    if (total_marks >= 90)
    {
        printf("Grade: Ex");
    }
    else if (total_marks >= 80 && total_marks < 90)
    {
        printf("Grade: A");
    }
    else if (total_marks >= 70 && total_marks < 80)
    {
        printf("Grade: B");
    }
    else if (total_marks >= 60 && total_marks < 70)
    {
        printf("Grade: C");
    }
    else
    {
        printf("Grade: F");
    }

    return 0;
}