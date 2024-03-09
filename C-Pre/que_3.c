#include <stdio.h>
// Fibonacci Series upto n (0 1 1 2 3...)
// Function to calculate fibonacci series using iteration
void fibo(int n)
{
    int n1 = 0, n2 = 1, n3;
    // Printing 1st two digits
    printf("The Fibonacci series is as: \n");
    printf("%d %d ", n1, n2);
    // Printing remaining digits
    for (int i = 2; i < n; i++)
    {
        n3 = n1 + n2;
        printf("%d ", n3);
        n1 = n2;
        n2 = n3;
    }
}
int main()
{
    int num;
    // Taking input
    printf("Enter the number to print series: \n");
    scanf("%d", &num);
    // Calling of function
    fibo(num);
    return 0;
}