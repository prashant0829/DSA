// Online C++ compiler to run C++ program online
#include <iostream>
#include <cmath>
#include <set>
#include <cctype>

using namespace std;

void solve(int n, string s, int countOfOne, int countOfZero)
{
    if (n == 0)
    {
        cout << s << "\n";
        return;
    }

    solve(n - 1, s + "1", countOfOne + 1, countOfZero);

    if (countOfOne > countOfZero)
    {
        solve(n - 1, s + "0", countOfOne, countOfZero + 1);
    }
}

int main()
{
    // Write C++ code here
    int n;
    cout << "Enter a number of parenthesis\n";
    cin >> n;
    cout << "Balanced parenthesis combinations are as follows\n";
    solve(n, "", 0, 0);

    return 0;
}