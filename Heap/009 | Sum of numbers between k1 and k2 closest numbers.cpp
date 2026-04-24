// Online C++ compiler to run C++ program online
#include <iostream>
#include <queue>
#include <vector>
#include <unordered_map>

using namespace std;

int main()
{
    // Write C++ code here
    cout << "Enter the size of the array\n";
    int n;
    cin >> n;
    cout << "Enter the elements\n";
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int k1;
    cout << "Enter the value of k1\n";
    cin >> k1;

    int k2;
    cout << "Enter the value of k1\n";
    cin >> k2;

    if (k1 > n || k2 > n)
    {
        cout << "Please enter correct value of k1 and k2";
        return -1;
    }

    priority_queue<int, vector<int>, greater<int>> minHeap(v.begin(), v.end());

    int r = 0;

    // Remove first k1 smallest
    for (int i = 0; i < k1; i++)
    {
        minHeap.pop();
    }

    // Now sum next (k2 - k1 - 1) elements
    for (int i = 0; i < k2 - k1 - 1; i++)
    {
        r += minHeap.top();
        minHeap.pop();
    }

    cout << "Total sum between k1 and k2: " << r << "\n";
    return 0;
}