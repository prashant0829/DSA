// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the array\n";
    cin >> n;
    vector<int> a(n);
    cout << "Enter the array\n";

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<int> mxl(n);
    vector<int> mxr(n);

    mxl[0] = a[0];
    mxr[n - 1] = a[n - 1];

    for (int i = 1; i < n; i++)
    {
        mxl[i] = max(mxl[i - 1], a[i]);
    }

    for (int i = n - 2; i >= 0; i--)
    {
        mxr[i] = max(mxr[i + 1], a[i]);
    }

    int r = 0;

    for (int i = 1; i < n - 1; i++)
    {
        r += min(mxl[i], mxr[i]) - a[i];
    }

    cout << r;

    return 0;
}