#include <iostream>
#include <Algorithm>
#include <vector>
#include <unordered_map>
#include <numeric> // For Accumulate function
using namespace std;

// Function to print the vector

void print(vector<int>v){
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    vector<int> v = {1, 2, 2, 3, 4, 5};

    // Sort the vector
    sort(v.begin(), v.end());
    print(v);

    // Reverse The vector
    reverse(v.begin(), v.end());
    print(v);


    // Rotate the vector
    rotate(v.begin(), v.begin() + 2, v.end());
    print(v);


    // Find the maximum element in the vector
    cout << "Maximum element in the vector : " << *max_element(v.begin(), v.end()) << endl;



    // Find the minimum element in the vector
    cout << "Minimum element in the vector : " << *min_element(v.begin(), v.end()) << endl;


    // Remove Duplicates from the vector
    v.erase(unique(v.begin(), v.end()), v.end());
    print(v);


    // Print the sum of array 
    cout<<"Sum of the array : "<<accumulate(v.begin(), v.end(), 0)<<endl;

    
    // Count the element in the vector
    cout<<"Count the element in the vector : "<<count(v.begin(), v.end(), 2)<<endl;


    // Search Element in the array
    cout<<"Search Element in the array : "<<binary_search(v.begin(), v.end(), 2)<<endl;


    // Lowerbound for an Element
    cout<<"Lowerbound for an Elemnet : "<<lower_bound(v.begin(), v.end(), 2) - v.begin()<<endl;\


    // Upperbound for an Element
    cout<<"Upperbound for an Elemnet : "<<upper_bound(v.begin(), v.end(), 2) - v.begin()<<endl;


    int a = 10;
    int b = 20;
    // Print max of two element
    cout<<"Max of two element : "<<max(a,b)<<endl;


    // Print min of two element
    cout<<"Min of two element : "<<min(a,b)<<endl;


    // Swap the above 2 element
    swap(a,b);


    // Erase a element from a position
    v.erase(v.begin() + 2);
    print(v);


    // Erase a element from a range
    v.erase(v.begin(), v.begin() + 2);


    // Fill the vector with a value
    fill(v.begin(), v.end(), 10);


    // Find the first occurence of a element
    cout<<"Find the first occurence of a element : "<<find(v.begin(), v.end(), 10) - v.begin()<<endl;


    // Next permutation of the array
    print(v);
    next_permutation(v.begin(), v.end());
    print(v);


    // Previous permutation of the array
    print(v);
    prev_permutation(v.begin(), v.end());
    print(v);



    return 0;
}