// It stores the data in key value pair
// It is also used to store the frequency of the data

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;
int main()
{
    vector<int>v = {1 ,2,2,3,4,5};
    // int n ; 
    // cout<<"Enter the size of the array : ";
    // cin>>n;
    // for (int i = 0; i < n; i++)
    // {
    //     int x;
    //     cin>>x;
    //     v.push_back(x);
    // }

    
    // Put all the data of vector in the map
    unordered_map<int,int>mp;
    for (int i = 0; i < v.size(); i++)
    {
        mp[v[i]]++;
    }

    // Print the data and frequency of the map    
    for (auto i : mp)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }

    // Print the size of the map
    cout<<"Size of the map : "<<mp.size()<<endl;


    // Check the map is Empty or Not
    cout<<"Check the map is Empty or Not : "<<mp.empty()<<endl;


    // Find the element in the map
    cout<<"Find the element in the map : "<<mp.find(2)->second<<endl;
    

    // Count function in Map
    cout<<"Count function in Map : "<<mp.count(3)<<endl;



    // Print all the element of map using Iterator
    unordered_map<int,int>::iterator it;
    for (it = mp.begin(); it != mp.end(); it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }


    // Erase the element in the map
    cout<<"Erase the element in the map : "<<mp.erase(2)<<endl;


    // Clear the Map
    mp.clear();
    cout<<"Clear the Map : "<<mp.size()<<endl;



    return 0;
}