#include <iostream>
#include <queue>

using namespace std;
int main()
{
    priority_queue<int>maxi;// Method to create max heap

    maxi.push(10);
    maxi.push(20);
    maxi.push(0);
    maxi.push(5);

    // Printing the top element of the heap(first element)
    cout << maxi.top() << endl;

    // Poping the top element of the heap
    maxi.pop();

    // Print the size of the max_heap
    cout << maxi.size() << endl;

    // Check the heap is empty or not
    cout << maxi.empty() << endl;

    // Print the all element of the heap
    while (!maxi.empty())
    {
        cout << maxi.top() << " ";
        maxi.pop();
    }
    cout << endl;


    maxi.emplace(100);
    maxi.emplace(200);

    // Emplace and push are both function to push data into container but push opertion is slower as compared to emplace or we can say that emplace is faster the push

    // Print the all element of the heap
    while (!maxi.empty())
    {
        cout << maxi.top() << " ";
        maxi.pop();
    }
    cout << endl;

    


    // Min Heap
    priority_queue<int, vector<int>, greater<int>>mini;
    return 0;
}