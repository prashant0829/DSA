// Online C++ compiler to run C++ program online
#include <iostream>
#include <queue>
#include <cmath>

using namespace std;
int main()
{
    // Write C++ code here
    cout << "Enter the number of pairs you want to enter\n";
    int n;
    cin >> n;

    vector<pair<int, int>> arr(n);
    for (int i = 0; i < n; i++)
    {
        cout << "Enter pair " << i + 1 << " with spaces\n";
        cin >> arr[i].first >> arr[i].second;
    }

    int k;
    cout << "Enter the value of k\n";
    cin >> k;

    priority_queue<pair<int, pair<int, int>>> maxHeap;
    for (int i = 0; i < n; i++)
    {
        int d = arr[i].first * arr[i].first + arr[i].second * arr[i].second;
        cout << d << " ";
        maxHeap.push({d, {arr[i]}});
        if (maxHeap.size() > k)
        {
            maxHeap.pop();
        }
    }
    cout << "\n";
    while (!maxHeap.empty())
    {
        cout << "{" << maxHeap.top().second.first << ", " << maxHeap.top().second.second << "} ";
        maxHeap.pop();
    }

    return 0;
}