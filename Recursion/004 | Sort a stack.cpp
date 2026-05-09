// Online C++ compiler to run C++ program online
#include <iostream>
#include <stack>

using namespace std;

void insert(stack<int> &v, int temp);

void sort(stack<int> &v)
{
    if (v.size() <= 1)
    {
        return;
    }
    int temp = v.top();
    v.pop();
    sort(v);
    insert(v, temp);
}

void insert(stack<int> &v, int temp)
{
    if (v.size() == 0 || v.top() <= temp)
    {
        v.push(temp);
        return;
    }
    int i = v.top();
    v.pop();
    insert(v, temp);
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

    sort(v);

    cout << "Sorted array:\n";
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