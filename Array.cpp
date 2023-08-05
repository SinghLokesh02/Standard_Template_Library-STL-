// The array is a collection of homogeneous objects and this array container is defined for constant size arrays or (static size). This container wraps around fixed-size arrays and the information of its size are not lost when declared to a pointer. 

// In order to utilize arrays, we need to include the array header: 
//  #include <array> 

#include <iostream>
#include <array>
using namespace std;
int main()
{
    array<int, 5> arr = {1, 2, 3, 4, 5};

    //  Print the size of the array
    int size = arr.size();
    cout << "The size of the array is: " << size << endl;

    // Print the elements of the array
    cout << "The elements of the array are: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    // Print any index element in the array
    cout << "\nThe element at index 2 is: " << arr[2] << endl;

    // at function
    cout << "The element at index 2 is: " << arr.at(2) << endl;

    // front function
    cout << "The first element of the array is: " << arr.front() << endl;

    // back function
    cout << "The last element of the array is: " << arr.back() << endl;

    // fill function
    arr.fill(10);
    cout << "The elements of the array are: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    // swap function
    array<int, 5> arr1 = {1, 2, 3, 4, 5};
    array<int, 5> arr2 = {6, 7, 8, 9, 10};
    cout << "\nThe elements of the first array are: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr1[i] << " ";
    }
    cout << "\nThe elements of the second array are: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr2[i] << " ";
    }
    arr1.swap(arr2);
    cout << "\nThe elements of the first array are: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr1[i] << " ";
    }
    cout << "\nThe elements of the second array are: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr2[i] << " ";
    }

    //Empty Function
    cout << "\nIs the array empty? " << arr.empty() << endl;




    return 0;
}