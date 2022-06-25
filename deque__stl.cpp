/* Date: 25 - 06 - 2022
Author: Sailendra */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void print_element(deque<int> d){
    for(auto &val: d){
        cout<<val<<" ";
    }
    cout<<endl;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    /*
        - access element from front as well as back 
    */

    deque<int> d;

    d.push_back(10);
    d.push_front(25);
    d.push_front(45);
    d.push_front(55);
    print_element(d);

    // d.pop_front();
    // d.pop_back();
    print_element(d);

    // cout<<"Element at index 2: "<<d.at(1)<<endl;

    cout<<"Front: "<<d.front()<<endl;
    cout<<"Back: "<<d.back()<<endl;
    cout<<"Empty or Not: "<<d.empty()<<endl;

    cout<<"Size: "<<d.size()<<endl;
    // d.erase(d.begin(), d.end());
    d.erase(d.begin(), d.begin()+2);

    cout<<"Size: "<<d.size()<<endl;
    print_element(d);



    return 0;
}