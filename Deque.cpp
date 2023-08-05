// Deque -> Double Ended Queue

#include <iostream>
#include <deque>
using namespace std;
int main(){
    // Declaration
    deque<int> d;

    // Initialization
    deque<int> d1 = {1, 2, 3, 4, 5};

    // Print the elements of the deque
    cout << "The elements of the deque are: ";
    for (int i = 0; i < d1.size(); i++)
    {
        cout << d1[i] << " ";
    }
    cout << endl;


    // push_back function
    d1.push_back(6);
    cout << "The elements of the deque are: ";
    for (int i = 0; i < d1.size(); i++)
    {
        cout << d1[i] << " ";
    }
    cout << endl;



    // push_front function
    d1.push_front(0);
    cout << "The elements of the deque are: ";
    for (int i = 0; i < d1.size(); i++)
    {
        cout << d1[i] << " ";
    }


    // pop_back function
    d1.pop_back(); // remove from the last of the deque


    d1.pop_front(); // Pop from the last of the deque



    // Size function
    cout << "\nThe size of the deque is: " << d1.size() << endl;

    // empty function
    if (d1.empty())
    {
        cout << "The deque is empty" << endl;
    }
    else
    {
        cout << "The deque is not empty" << endl;
    }


    // at function
    cout << "The element at index 2 is: " << d1.at(2) << endl;

    // [] operator
    cout << "The element at index 2 is: " << d1[2] << endl;


    // clear function
    // d1.clear();


    // erase function
    d1.erase(d1.begin() + 2);
    cout << "The elements of the deque are after deletion: ";
    for (int i = 0; i < d1.size(); i++)
    {
        cout << d1[i] << " ";
    }
    cout << endl;


    // insert function
    cout << "The elements of the deque are after Insertion: ";
    d1.insert(d1.begin() + 2, 3);
    for (int i = 0; i < d1.size(); i++)
    {
        cout << d1[i] << " ";
    }
    cout << endl;







    return 0;
}