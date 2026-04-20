// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main()
{
    int option;

    cout << "Please enter your option\n";
    cout << "1. Push\n2. Pop\n3. Min\n4. Quit\n";
    cin >> option;
    stack<int> s;
    int t = -1;
    int n;
    while (option > 0 && option < 4)
    {
        switch (option)
        {
        case (1):
            cout << "Enter a number to push\n";
            cin >> n;

            if (s.empty())
            {
                t = n;
                s.push(n);
            }
            else if (n < t)
            {
                s.push(2 * n - t);
                t = n;
            }
            else
            {
                s.push(n);
            }
            break;
        case (2):
            if (!s.empty())
            {
                int p = s.top();
                s.pop();
                if (p < t)
                {
                    cout << t << " is popped from the stack\n";
                    t = 2 * t - p;
                }
                else
                {
                    cout << p << " is popped from the stack\n";
                }
            }
            else
            {
                cout << "No element to pop\n";
            }

            break;
        case (3):
            if (s.empty())
            {
                cout << "No more elements in the stack\n";
            }
            else
            {
                cout << t << " is the minimum\n";
            }
            break;
        }
        cout << "1. Push\n2. Pop\n3. Min\n4. Quit\n";
        cin >> option;
    }

    return 0;
}