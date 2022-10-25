int sumArray(int input[], int n, int idx)
{
    if (n <= idx)
    {
        return 0;
    }
    return input[idx] + sumArray(input, n, idx + 1);
}

int sum(int input[], int n)
{
    /* Don't write main().
       Don't read input, it is passed as function argument.
       Return output and don't print it.
       Taking input and printing output is handled automatically.
    */
    return sumArray(input, n, 0);
}
