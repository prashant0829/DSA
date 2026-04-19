#include <iostream>
#include <vector>
#include <stack>

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

    stack<int> s;
    int water = 0;

    for (int i = 0; i < n; i++)
    {
        // In this we are first moving until we are getting smaller building until we got one bigger than s.top() then while the current building is taller we trace back using stack and find the distances and height of the buildings in which water can be stored.
        while (!s.empty() && a[i] > a[s.top()])
        {

            int top = s.top();
            s.pop();

            if (s.empty())
                break;

            int distance = i - s.top() - 1;

            int height = min(a[i], a[s.top()]) - a[top];

            water += distance * height;
        }

        s.push(i);
    }

    cout << "Trapped water: " << water;

    return 0;
}