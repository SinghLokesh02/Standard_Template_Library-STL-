#include <iostream>
#include <set>
#include <unordered_set>
// It stores only unique Element

using namespace std;
int main()
{
    unordered_set<int>st;
    st.insert(1);
    st.insert(2);
    st.insert(3);
    st.insert(3);

    // Print the size of the set
    cout << st.size() << endl;



    // Print all the element of the set
    for(auto it = st.begin(); it != st.end(); it++)
    {
        cout << *it << " ";
    }cout<<endl;


    // Erase element of the set
    st.erase(2);
    for(auto it = st.begin(); it != st.end(); it++)
    {
        cout << *it << " ";
    }cout<<endl;


    // Count Function
    if(st.count(3))
    {
        cout << "Present" << endl;
    }
    else
    {
        cout << "Not Present" << endl;
    }


    // Find in the set
    auto it = st.find(3);
    if(it == st.end())
    {
        cout << "Not Found" << endl;
    }
    else
    {
        cout << "Found" << endl;
    }


    // Empty the set
    st.clear();
    cout << st.size() << endl;


    // Check if the set is Empty or not
    if(st.empty())
    {
        cout << "Set is Empty" << endl;
    }
    else
    {
        cout << "Set is not Empty" << endl;
    }


    return 0;
}