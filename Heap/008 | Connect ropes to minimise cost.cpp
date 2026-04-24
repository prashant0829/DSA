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
    vector<int> r;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    priority_queue<
        int,
        vector<int>,
        greater<int>>
        minHeap;
    for (auto x : v)
    {
        minHeap.push(x);
    }
    int cost = 0;
    while (minHeap.size() != 1)
    {
        int a = minHeap.top();
        minHeap.pop();
        int b = minHeap.top();
        minHeap.pop();
        int c = a+b;
        cost += c;
        minHeap.push(c);
    }

    cout << "Total Length: " << minHeap.top() << "\n";
    cout << "Total Min Cost: " << cost << "\n";
    return 0;
}