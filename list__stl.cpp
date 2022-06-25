/* Date: 25 - 06 - 2022
Author: Sailendra */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void print_list(list<int> l){
    for(int &val: l){
        cout<<val<<" ";
    }cout<<endl;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    list<int> l;
    l.push_back(10);
    l.push_back(40);
    l.push_back(110);
    l.push_back(210);
    l.push_back(910);
    l.push_front(1);
    print_list(l);

    l.erase(l.begin());
    print_list(l);

    cout<<"size of list: "<<l.size()<<endl;

    list<int> n_l(5, 10);
    print_list(n_l);



    return 0;
}