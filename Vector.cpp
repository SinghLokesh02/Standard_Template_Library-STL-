#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{

    // Declaration of Vector in C++
    vector<int> v;


    // Initialization of Vector in C++
    vector<int> v1 = {1, 2, 3, 4, 5};
    vector<int> v2(5, 10);
    vector<int> v3(v1.begin(), v1.end());
    vector<int> v4(v2);


    //  Print the size of the vector
    cout << "Size: " << v.size();


    // Print the Capacity of the vector
    cout << "\nCapacity: " << v.capacity();


    // Print the Max size of the vector
    cout << "\nMax_Size: " << v.max_size();


    // Print the elements of the vector
    cout << "\nElements: ";
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }


    // Print the first element of the vector
    cout << "\nFirst Element: " << v1.front();


    // push_back functions in vector
    v1.push_back(6);


    // Print the elements of the vector
    cout << "\nElements: ";

    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }
    cout << endl;


    // pop_back functions in vector
    v1.pop_back();
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }
    cout << endl;


    // Insert function in vector
    v1.insert(v1.begin() + 4, 0);


    // Print the elements of the vector
    cout << "\nElements: ";
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }
    cout << endl;


    // erase function in vector
    v1.erase(v1.begin() + 4);
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }
    cout << endl;


    // clear function in vector
    // v1.clear();


    cout << "\nSize: " << v1.size();

    // Check Empty
    if (v1.empty())
    {
        cout << "\nVector is Empty";
    }
    else
    {
        cout << "\nVector is not Empty";
    }
    cout << endl;


    // Print the whole vector using Iterator

    for (auto i = v1.begin(); i != v1.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;


    // Copy a vector into another
    vector<int> v5 = v1;
    for (auto i : v5)
        cout << i << " ";
    cout << endl;


    // Swap two vectors
    v1.swap(v2);


    // Find a index of a element in a vector
    auto it = find(v5.begin(), v5.end(), 3);
    cout << it - v5.begin() << endl;


    // Sort a vector
    sort(v5.begin(), v5.end());
    for (auto i : v5)
        cout << i << " ";
    cout << endl;


    // Reverse a vector
    reverse(v5.begin(), v5.end());
    for (auto i : v5)
        cout << i << " ";


    // At function
    cout << endl
         << v5.at(2) << endl;


    // [] operator
    cout << v5[2] << endl;

    // **** It is similar to the at() function, the only difference is that the at() function throws an out-of-range exception when the position is not in the bounds of the size of vector, while this operator causes undefined behavior.

    

    return 0;
}