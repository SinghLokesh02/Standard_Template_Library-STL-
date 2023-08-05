#include <iostream>
#include <stack>

using namespace std;
int main()
{
    // Declaration
    stack<int> s;

    s.push(1);
    s.push(2);
    s.push(3);


    // Print the top element of the stack
    cout << "The top element of the stack is: " << s.top() << endl;

    // Pop the top element of the stack
    s.pop();


    // Print the elements of the stack
    cout << "The elements of the stack are: ";
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }

    // Print the size of the stack
    cout << "\nThe size of the stack is: " << s.size() << endl;

    // Empty function
    if (s.empty())
    {
        cout << "The stack is empty" << endl;
    }
    else
    {
        cout << "The stack is not empty" << endl;
    }

    return 0;
}