#include <stdio.h>
// Creating Struct student
struct Student
{
    char studentName[50];
    char rollNo[20];
    int totalMarks;
};
void readStud(int n, struct Student s[])
{
    // Reading the data
    for (int i = 0; i < n; i++)
    {
        printf("Enter the Name of student %d: ", i + 1);
        scanf("%s", s[i].studentName);
        printf("Enter the Roll no of student %d: ", i + 1);
        scanf("%s", s[i].rollNo);
        printf("Enter the Total Marks of student %d: ", i + 1);
        scanf("%d", &s[i].totalMarks);
    }
}
void printStud(int n, struct Student s[])
{
    // Printing the data
    for (int i = 0; i < n; i++)
    {
        printf("\nThe Name of student %d is: %s\n", i + 1, s[i].studentName);
        printf("The Roll no of student %d: %s\n", i + 1, s[i].rollNo);
        printf("Enter the Total Marks of student %d: %d\n", i + 1, s[i].totalMarks);
    }
}
int main()
{
    int n;
    printf("Enter the numbers of student: ");
    scanf("%d", &n);
    struct Student s[n];
    readStud(n, s);
    printStud(n, s);
    return 0;
}