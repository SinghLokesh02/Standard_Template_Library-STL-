#include <iostream>
#include <list>

using namespace std;
int main()
{
    list<int>l;
    list<int>l1{1,2,3,4,5};
    list<string>l2{"apple","guava","mango","banana"};

    // Pushing the elements in the list (push_back function)
    l2.push_back("pineapple");

    // Printing the list items with the help of loop
    for(string s:l2){
        cout<<s<<"-->";
    }cout<<endl;

    

    // Pushing the elements in the list (push_front function)
    l2.push_front("kiwi");
    // Printing the list items with the help of loop
    for(string s:l2){
        cout<<s<<"-->";
    } cout<<endl;


    // Poping the elements from the list (pop_back function)
    l2.pop_back();

    for(string s:l2){
        cout<<s<<"-->";
    } cout<<endl;


    // Poping the elements from the list (pop_back function)
    l2.pop_front();

    for(string s:l2){
        cout<<s<<"-->";
    } cout<<endl;
    

    // Sorting the list (sort function)
    l2.sort();

    for(string s:l2){
        cout<<s<<"-->";
    } cout<<endl;


    // Size Function
    cout<<"The size of the list is: "<<l2.size()<<endl;


    // Print l2 with the help of iterator
     
    for(auto it=l2.begin();it!=l2.end();it++){
        cout<<(*it)<<"-->";
    }cout<<endl;
    

    // Reverse the list (reverse function)
    l2.reverse();
    for(auto it=l2.begin();it!=l2.end();it++){
        cout<<(*it)<<"-->";
    }cout<<endl;

    // clear function
    l2.clear();

    // size function
    cout<<"The size of the list is: "<<l2.size()<<endl;

    // empty function
    if(l2.empty()){
        cout<<"The list is empty"<<endl;
    }
    else{
        cout<<"The list is not empty"<<endl;
    }


    // Print first element of the list
    cout<<"The first element of the list is: "<<l2.front()<<endl;


    // Print last element of the list
    cout<<"The last element of the list is: "<<l2.back()<<endl;


    


    return 0;
}