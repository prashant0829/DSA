// Online C++ compiler to run C++ program online
#include <iostream>
#include <cmath>
#include <set>
#include <cctype>

using namespace std;

void solve(int opening, int closing, string s)
{
    if (opening == 0 && closing == 0)
    {
        cout << s << "\n";
        return;
    }

    if (opening > 0)
    {

        solve(opening - 1, closing, s + "(");
    }

    if (closing > opening)
    {
        solve(opening, closing - 1, s + ")");
    }
}

int main()
{
    // Write C++ code here
    int n;
    cout << "Enter a number of parenthesis\n";
    cin >> n;
    cout << "Balanced parenthesis combinations are as follows\n";
    solve(n, n, "");

    return 0;
}