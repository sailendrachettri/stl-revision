/* Date: 25 - 06 - 2022
Author: Sailendra */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void print_vec(vector<int> v){
    for(auto val: v){
        cout<<val<<" ";
    }
    cout<<endl;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    /*
    - Vector is an dynamic array
    - Whenever the vector hit the max size it create new vector (2X size) and copy all the elements and dump the old one
    */

    vector<int> v;
    cout<<"Intial capacity: "<<v.capacity()<<endl;
    
    v.push_back(2);
    v.push_back(4);
    v.push_back(12);
    v.push_back(4);
    v.push_back(12);
    cout<<"Capacity: "<<v.capacity()<<endl; // space for elements
    cout<<"Size: "<<v.size()<<endl; // number of elements

    cout<<"At: "<<v.at(2)<<endl;
    cout<<"Front: "<<v.front()<<endl;
    cout<<"Back: "<<v.back()<<endl;

    print_vec(v);
    v.pop_back(); // removing last element
    print_vec(v);

    v.clear(); // only the size will be zero not Capacity
    cout<<"Capacity: "<<v.capacity()<<endl;
    cout<<"Size: "<<v.size()<<endl;

    // Another way to create vector
    vector<int> a(5, 10);
    print_vec(a);
    vector<int> a2(a);
    print_vec(a2);
    
    return 0;
}