#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int MAH(vector<int> v, int n);
vector<int> makeHistogram(vector<int> temp, vector<int> v);

int main()
{
    int n, m;
    cout << "Enter the no of rows of the array\n";
    cin >> n;
    cout << "Enter the no of columns of the array\n";
    cin >> m;
    cout << "\n";

    vector<vector<int>> v(n, vector<int>(m));

    cout << "Below is your matrix\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> v[i][j];
        }
    }

    cout << "\n";
    for (auto row : v)
    {
        for (auto x : row)
            cout << x << " ";
        cout << endl;
    }
    cout << "\n";

    vector<int> h;
    vector<int> temp;
    vector<int> r(n);

    temp = v[0];
    r[0] = MAH(temp, m);

    for (int i = 1; i < n; i++)
    {
        temp = makeHistogram(temp, v[i]);
        r[i] = MAH(temp, m);
    }

    int mx = r[0];
    for (int i = 1; i < r.size(); i++)
    {
        if (r[i] > mx)
        {
            mx = r[i];
        }
    }
    cout << mx;

    return 0;
}

int MAH(vector<int> v, int n)
{
    stack<int> s1;
    stack<int> s2;

    vector<int> r1(n);
    vector<int> r2(n);

    for (int i = 0; i < n; i++)
    {
        while (!s1.empty() && v[s1.top()] >= v[i])
        {
            s1.pop();
        }

        r1[i] = s1.empty() ? -1 : s1.top();

        s1.push(i);
    }

    for (int i = n - 1; i >= 0; i--)
    {
        while (!s2.empty() && v[s2.top()] >= v[i])
        {
            s2.pop();
        }

        r2[i] = s2.empty() ? n : s2.top();

        s2.push(i);
    }

    int maxArea = 0;

    for (int i = 0; i < n; i++)
    {
        int area = (r2[i] - r1[i] - 1) * v[i];
        maxArea = max(maxArea, area);
    }

    return maxArea;
}

vector<int> makeHistogram(vector<int> temp, vector<int> v)
{
    for (int i = 0; i < temp.size(); i++)
    {
        temp[i] = (v[i] == 0) ? 0 : temp[i] + v[i];
    }
    return temp;
}