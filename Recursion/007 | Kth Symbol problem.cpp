// Online C++ compiler to run C++ program online
#include <iostream>
#include <cmath>

using namespace std;

int getValue(int n, int k)
{
    if (n == 1)
    {
        return 0;
    }

    int mid = (1 << (n - 1)) / 2; // 2^(n-1) / 2

    if (k <= mid)
    {
        return getValue(n - 1, k);
    }
    else
    {
        return !getValue(n - 1, k - mid);
    }
}
int main()
{
    // Write C++ code here
    int k, n;
    cout << "Enter the value of n\n";
    cin >> n;
    cout << "Enter the value of k\n";
    cin >> k;

    cout << "The value is\n";
    cout << getValue(n, k);
    return 0;
}