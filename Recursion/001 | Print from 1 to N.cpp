// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;
void print(int n)
{
    if (n == 1)
    {
        cout << " 1";
        return;
    }
    print(n - 1);
    cout << " " << n;
}

int main()
{
    cout << "Enter the number you want to print upto";
    int n;
    cin >> n;
    print(n);
    return 0;
}