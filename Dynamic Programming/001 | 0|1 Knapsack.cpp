// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> dp;

int knapsack(vector<int> &v, vector<int> &w, int k, int n)
{
    if (n == 0 || k == 0)
    {
        return 0;
    }
    if (dp[n][k] != -1)
    {
        return dp[n][k];
    }
    if (w[n - 1] <= k)
    {
        return dp[n][k] = max(v[n - 1] + knapsack(v, w, k - w[n - 1], n - 1), knapsack(v, w, k, n - 1));
    }
    else
    {
        return dp[n][k] = knapsack(v, w, k, n - 1);
    }
}

int main()
{
    int k;
    cout << "Enter the size of the knapsack\n";
    cin >> k;

    int n;
    cout << "Enter the number of available items\n";
    cin >> n;

    vector<int> v(n);
    cout << "Enter the value of the items\n";
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v[i] = a;
    }

    vector<int> w(n);
    cout << "Enter the weights of the items\n";
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        w[i] = a;
    }
    dp.resize(n + 1, vector<int>(k + 1, -1));
    cout << "Maximum value: " << knapsack(v, w, k, n);

    return 0;
}