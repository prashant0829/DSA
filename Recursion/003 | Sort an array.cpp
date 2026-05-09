// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>

using namespace std;

void insert(vector<int> &v, int temp);

void sort(vector<int> &v)
{
    if (v.size() <= 1)
    {
        return;
    }
    int temp = v.back();
    v.pop_back();
    sort(v);
    insert(v, temp);
}

void insert(vector<int> &v, int temp)
{
    if (v.size() == 0 || v.back() <= temp)
    {
        v.push_back(temp);
        return;
    }
    int i = v.back();
    v.pop_back();
    insert(v, temp);
    v.push_back(i);
}

int main()
{
    // Write C++ code here
    std::cout << "Enter the size of the array\n";
    int n;
    cin >> n;
    vector<int> v;
    cout << "Enter the values\n";
    for (int i = 0; i < n; i++)
    {
        int e;
        cin >> e;
        v.push_back(e);
    }
    cout << "\n";

    sort(v);

    cout << "Sorted array:\n";
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << "\n";

    return 0;
}