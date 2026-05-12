// Online C++ compiler to run C++ program online
#include <iostream>
#include <cmath>
#include <set>

using namespace std;

set<string> mySet;

void solve(string input, string output)
{
    if (input.length() == 0)
    {
        cout << output << " \n";
        return;
    }

    char ch = input[0];
    input.erase(input.begin());

    string output1 = output + "_" + ch;
    string output2 = output + ch;

    solve(input, output1);
    solve(input, output2);
}
int main()
{
    // Write C++ code here
    string s;
    cout << "Enter a string\n";
    cin >> s;
    cout << "Permutations with spaces are as follows\n";
    string output = "";
    output += s[0];
    s.erase(s.begin());
    solve(s, output);

    return 0;
}