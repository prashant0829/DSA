// Online C++ compiler to run C++ program online
#include <iostream>
#include <cmath>
#include <set>
#include <cctype>

using namespace std;

void solve(int n, string s, int countOfOne, int countOfZero)
{
    if (s.length() == n)
    {
        cout << s << "\n";
        return;
    }

    if (countOfOne > countOfZero)
    {
        string s1 = s + "0";
        string s2 = s + "1";
        solve(n, s1, countOfOne, countOfZero + 1);
        solve(n, s2, countOfOne + 1, countOfZero);
    }

    if (countOfOne == countOfZero)
    {
        string s1 = s + "1";
        solve(n, s1, countOfOne + 1, countOfZero);
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