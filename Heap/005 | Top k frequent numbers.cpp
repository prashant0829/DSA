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

    int k;
    cout << "Enter the value of k\n";
    cin >> k;
    if (k <= 0 || k > n)
    {
        cout << "Invalid value of k\n";
        return 0;
    }

    unordered_map<int, int> freq;

    for (int x : v)
    {
        freq[x]++;
    }

    priority_queue<
        pair<int, int>,
        vector<pair<int, int>>,
        greater<pair<int, int>>>
        minHeap;
    for (auto x : freq)
    {
        minHeap.push({x.second, x.first});
        if (minHeap.size() > k)
        {

            minHeap.pop();
        }
    }
    while (!minHeap.empty())
    {
        int t = minHeap.top().second;
        r.push_back(t);
        minHeap.pop();
    }

    cout << "Top k frequency\n";
    for (int i = 0; i < r.size(); i++)
    {
        cout << r[i] << " ";
    }
    return 0;
}