// Online C++ compiler to run C++ program online
#include <iostream>
#include <cmath>

using namespace std;

void solve(string input, string output)
{
    if (input.length() == 0)
    {
        cout << "'" << output << "'" << "\n";
        return;
    }
    string output1 = output;
    string output2 = output + input[0];

    input.erase(input.begin());

    solve(input, output1);
    solve(input, output2);
}
int main()
{
    // Write C++ code here
    string s;
    cout << "Enter a string\n";
    cin >> s;
    cout << "Substrings are as follows\n";
    solve(s, "");

    return 0;
}