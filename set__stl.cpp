/* Date: 25 - 06 - 2022
Author: Sailendra */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    set<int> s;
    s.insert(5);
    s.insert(51);
    s.insert(9);
    s.insert(4);
    s.insert(5);

    cout<<"size: "<<s.size()<<endl;

    for(auto &val: s){
        cout<<val<<" ";
    }cout<<endl;

    // set<int> ::iterator it = s.begin();
    // it++;
    // s.erase(it);

    for(auto &val: s){
        cout<<val<<" ";
    }cout<<endl;
    cout<<"size: "<<s.size()<<endl;

    cout<<"9 is present or not: "<<s.count(9)<<endl;

    set<int> ::iterator itr = s.find(4);
    cout<<"value present at itr: "<<*itr<<endl;

    for(auto it=itr; it!=s.end(); it++){
        cout<<(*it)<<" ";
    }cout<<endl;

    return 0;
}