#include <string.h>

bool helper(char input[], int s, int e)
{
    if (s >= e)
        return true;

    if (input[s] == input[e])
        return helper(input, s + 1, e - 1);

    return false;
}

bool checkPalindrome(char input[])
{
    // Write your code here
    int n = strlen(input);
    return helper(input, 0, n - 1);
}
