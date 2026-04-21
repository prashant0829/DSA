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
    priority_queue<int> maxHeap;
    for (int i = 0; i < n; i++)
    {
        maxHeap.push(v[i]);
        if (maxHeap.size() > k)
        {
            maxHeap.pop();
        }
    }

    cout << k << "th smallest element is " << maxHeap.top();
    return 0;
}