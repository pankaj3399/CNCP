void helper(int n, vector<vector<int>> &ans, int source, int auxiliary, int destination)
{

    if (n == 0)
        return;
    if (n == 1)
    {
        vector<int> tans = {source, destination};
        ans.push_back(tans);
        return;
    }
    helper(n - 1, ans, source, destination, auxiliary);
    helper(1, ans, source, auxiliary, destination);
    helper(n - 1, ans, auxiliary, source, destination);
}

vector<vector<int>> towerOfHanoi(int n)
{
    //    Write your code here.
    vector<vector<int>> ans;
    helper(n, ans, 1, 2, 3);
    return ans;
}