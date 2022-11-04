#include <string.h>
int helper(char input[], int n)
{
    if (n == 0)
        return 0;
    int ans = (input[n - 1] - '0') + 10 * (helper(input, n - 1));
    return ans;
}

int stringToNumber(char input[])
{
    // Write your code here
    int n = strlen(input);
    return helper(input, n);
}