/*
Q12. Write a Program to reverse the letters present in the given String. Do
not use strrev() function.
*/

#include <iostream>
using namespace std;

int main()
{
    string str;
    cout << "Enter a string:" << endl;
    cin >> str;

    int i = 0, j = str.length() - 1;
    while (i < j)
    {
        char c = str[i];
        str[i] = str[j];
        str[j] = c;
        i++;
        j--;
    }

    cout << "Reversed string is: "
         << str << endl;

    return 0;
}