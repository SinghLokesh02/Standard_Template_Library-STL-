#include <iostream>
#include <queue>

using namespace std;
int main()
{
    // Declaration
    queue<int> q;

    // Add element in the queue
    q.push(1);
    q.push(2);
    q.push(3);
    

    // Size of the queuue
    cout << "Size: " << q.size() << endl;


    // Print the front element of the queue
    cout << "Front: " << q.front() << endl;


    // Print the back element of the queue
    cout << "Back: " << q.back() << endl;


    // Pop the front element of the queue
    q.pop();

    // Print the elements of the queue
    cout << "Queue: ";
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }

    // Empty Function
    if (q.empty())
    {
        cout << "Queue is empty" << endl;
    }
    else
    {
        cout << "Queue is not empty" << endl;
    }


    return 0;
}