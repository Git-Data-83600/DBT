#include <stdio.h>
// Factorial of a Number (Recursive method)
// Function to find factorial
int fact(int n)
{
    int factorial = 1;
    // Base conditions for recursion
    if (n == 1 || n == 0)
        return 1;
    // Calling of fact function recursively to find factorial
    factorial = n * fact(n - 1);
    return factorial;
}
int main(void)
{
    // Taking input from the user
    int num;
    printf("Enter the Number to find Factorial: ");
    scanf("%d", &num);
    // Printing the factorial of given input
    printf("The Factorial of number %d is: %d", num, fact(num));
    return 0;
}