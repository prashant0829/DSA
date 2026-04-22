// Online C++ compiler to run C++ program online
#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main()
{
    // Write C++ code here
    cout << "Enter the size of the array\n";
    int n;
    cin >> n;
    cout << "Enter the elements\n";
    vector<int> v(n);
    vector<int> r;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int k;
    cout << "Enter the value of k\n";
    cin >> k;
    if (k <= 0 || k > n)
    {
        cout << "Invalid value of k\n";
        return 0;
    }
    priority_queue<int, vector<int>, greater<int>> minHeap;
    for (int i = 0; i < n; i++)
    {
        minHeap.push(v[i]);
        if (minHeap.size() > k)
        {
            int t = minHeap.top();
            r.push_back(t);
            minHeap.pop();
        }
    }
    while (!minHeap.empty())
    {
        int t = minHeap.top();
        r.push_back(t);
        minHeap.pop();
    }

    for (int i = 0; i < n; i++)
    {
        cout << r[i] << " ";
    }
    return 0;
}