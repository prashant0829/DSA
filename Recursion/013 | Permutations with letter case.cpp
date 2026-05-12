// Online C++ compiler to run C++ program online
#include <iostream>
#include <cmath>
#include <set>
#include <cctype>

using namespace std;

string toggleCase(char c)
{
    if (islower(c))
    {
        c = toupper(c);
    }
    else if (isupper(c))
    {
        c = tolower(c);
    }
    return string(1, c);
}

void solve(string input, string output)
{
    if (input.length() == 0)
    {
        cout << output << " \n";
        return;
    }

    char ch = input[0];
    input.erase(input.begin());

    if (isdigit(ch))
    {
        string output1 = output + ch;
        solve(input, output1);
    }
    else
    {
        string output1 = output + toggleCase(ch);
        string output2 = output + ch;

        solve(input, output1);
        solve(input, output2);
    }
}
int main()
{
    // Write C++ code here
    string s;
    cout << "Enter a string\n";
    cin >> s;
    cout << "Permutations with spaces are as follows\n";
    solve(s, "");

    return 0;
}