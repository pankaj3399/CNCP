// Change in the given string itself. So no need to return or print anything
#include <string.h>
void replacePi(char input[])
{
    // Write your code here
    int n = strlen(input);
    if (n <= 1)
        return;
    replacePi(input + 1);
    int m = strlen(input);
    if (input[0] == 'p' && input[1] == 'i')
    {
        for (int i = m; i >= 0; i--)
        {
            input[i + 2] = input[i];
        }
        input[0] = '3';
        input[1] = '.';
        input[2] = '1';
        input[3] = '4';
    }
}
