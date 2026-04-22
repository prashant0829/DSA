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
    int x;
    cout << "Enter the value of x\n";
    cin >> x;
    int k;
    cout << "Enter the value of k\n";
    cin >> k;
    if (k <= 0 || k > n)
    {
        cout << "Invalid value of k\n";
        return 0;
    }
    priority_queue<pair<int, int>> maxHeap;
    for (int i = 0; i < n; i++)
    {
        maxHeap.push({abs(x - v[i]), v[i]});
        cout << x - v[i] << " " << v[i] << "\n";
        if (maxHeap.size() > k)
        {

            maxHeap.pop();
        }
    }
    while (!maxHeap.empty())
    {
        int t = maxHeap.top().second;
        r.push_back(t);
        maxHeap.pop();
    }

    for (int i = 0; i < r.size(); i++)
    {
        cout << r[i] << " ";
    }
    return 0;
}