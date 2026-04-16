#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the array\n";
    cin >> n;
    vector<int> v(n);
    cout << "Your array size is " << n << "\n";
    cout << "Enter the array\n";

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    stack<int> s;
    vector<int> r1(n), r2(n);

    // NSL
    for (int i = 0; i < n; i++)
    {
        while (!s.empty() && v[s.top()] >= v[i])
            s.pop();

        r1[i] = s.empty() ? -1 : s.top();
        s.push(i);
    }

    while (!s.empty())
        s.pop();

    // NSR
    for (int i = n - 1; i >= 0; i--)
    {
        while (!s.empty() && v[s.top()] >= v[i])
            s.pop();

        r2[i] = s.empty() ? n : s.top();
        s.push(i);
    }

    cout << "NSL array: ";
    for (int i = 0; i < n; i++)
    {
        cout << r1[i] << " ";
    }

    cout << "\nNSR array: ";
    for (int i = 0; i < n; i++)
    {
        cout << r2[i] << " ";
    }

    cout << "\n";

    int maxArea = 0;

    for (int i = 0; i < n; i++)
    {
        int area = (r2[i] - r1[i] - 1) * v[i];
        cout << area << " ";
        maxArea = max(maxArea, area);
    }

    cout << "\nMax Area: " << maxArea << endl;

    return 0;
}