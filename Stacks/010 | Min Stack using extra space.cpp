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
    stack<int> ss;
    int n;
    while (option > 0 && option < 4)
    {
        switch (option)
        {
        case (1):
            cout << "Enter a number to push\n";
            cin >> n;
            s.push(n);
            if (ss.empty() || n <= ss.top())
            {
                ss.push(n);
            }
            break;
        case (2):
            if (!s.empty())
            {
                int p = s.top();
                s.pop();
                if (!ss.empty() && ss.top() == p)
                {
                    ss.pop();
                }
                cout << p << " is popped from the stack\n";
            }
            else
            {
                cout << "No element to pop\n";
            }

            break;
        case (3):
            if (ss.empty())
            {
                cout << "No more elements in the stack\n";
            }
            else
            {
                cout << ss.top() << " is the minimum\n";
            }
            break;
        }
        cout << "1. Push\n2. Pop\n3. Min\n4. Quit\n";
        cin >> option;
    }

    return 0;
}