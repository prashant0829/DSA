// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <stack>
#include <utility>

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

    stack<pair<int, int>> s;
    vector<int> r(n);

    for (int i = 0; i < n; i++)
    {
        while (!s.empty() && s.top().second <= v[i])
        {
            s.pop();
        }

        r[i] = s.empty() ? -1 : s.top().first;

        s.push({i, v[i]});
    }

    for (int i = 0; i < n; i++)
    {
        cout << i - r[i] << " ";
    }

    return 0;
}