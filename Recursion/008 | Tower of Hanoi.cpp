// Online C++ compiler to run C++ program online
#include <iostream>
#include <cmath>

using namespace std;

void solve(int n, string source, string helper, string destination)
{

    if (n == 1)
    {
        cout << source << " -> " << destination << "\n";
        return;
    }

    solve(n - 1, source, destination, helper);
    cout << source << " -> " << destination << "\n";
    solve(n - 1, helper, source, destination);
}

int main()
{
    // Write C++ code here
    int k, n;
    cout << "Enter the number of disks\n";
    cin >> n;

    string source = "A", helper = "B", destination = "C";

    solve(n, source, helper, destination);

    return 0;
}