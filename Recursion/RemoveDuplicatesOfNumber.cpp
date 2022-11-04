#include <cstring>
void removeConsecutiveDuplicates(char *input)
{
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Change in the given string itself.
     * No need to return or print anything
     * Taking input and printing output is handled automatically.
     */
    int n = strlen(input);
    if (n <= 1)
        return;
    removeConsecutiveDuplicates(input + 1);
    int m = strlen(input);

    if (input[0] == input[1])
    {
        for (int i = 1; i <= m; i++)
        {
            input[i - 1] = input[i];
        }
    }
}