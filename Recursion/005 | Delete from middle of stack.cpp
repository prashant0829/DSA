// Online C++ compiler to run C++ program online
#include <iostream>
#include <stack>

using namespace std;

void deleteMiddle(stack<int> &v, int k)
{
    if (k == 1)
    {
        v.pop();
        return;
    }

    int i = v.top();
    v.pop();

    deleteMiddle(v, k - 1);

    v.push(i);
}

int main()
{
    // Write C++ code here
    std::cout << "Enter the size of the array\n";
    int n;
    cin >> n;
    stack<int> v;
    cout << "Enter the values\n";
    for (int i = 0; i < n; i++)
    {
        int e;
        cin >> e;
        v.push(e);
    }
    cout << "\n";

    deleteMiddle(v, n / 2 + 1);

    cout << "Array array after deleting middle element\n";
    stack<int> temp;

    while (!v.empty())
    {
        temp.push(v.top());
        v.pop();
    }

    while (!temp.empty())
    {
        cout << temp.top() << " ";
        temp.pop();
    }

    return 0;
}